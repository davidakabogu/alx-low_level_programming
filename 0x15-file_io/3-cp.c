#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_error(char *msg, char *file, int code) {
    dprintf(STDERR_FILENO, msg, file);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, n_read, n_write;
    char buffer[BUFFER_SIZE];
    char *file_from, *file_to;

    if (argc != 3) {
        print_error("Usage: %s file_from file_to\n", argv[0], 97);
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error("Error: Can't read from file %s\n", file_from, 98);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        print_error("Error: Can't write to %s\n", file_to, 99);
    }

    while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        n_write = write(fd_to, buffer, n_read);
        if (n_write == -1) {
            print_error("Error: Can't write to %s\n", file_to, 99);
        }
        if (n_write != n_read) {
            print_error("Error: Write to %s is incomplete\n", file_to, 99);
        }
    }

    if (n_read == -1) {
        print_error("Error: Can't read from file %s\n", file_from, 98);
    }

    if (close(fd_from) == -1) {
        print_error("Error: Can't close fd %d\n", fd_from, 100);
    }

    if (close(fd_to) == -1) {
        print_error("Error: Can't close fd %d\n", fd_to, 100);
    }

    return 0;
}

