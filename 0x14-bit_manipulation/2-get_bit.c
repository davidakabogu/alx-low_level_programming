#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
    n >>= index;

    if (n & 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
