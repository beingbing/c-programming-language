#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void)
{
    printf("%u\n", setbits(5732, 6, 3, 9823));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    x = x & (~((~(~0 << n)) << p));
    y = (y & (~(~0 << n))) << p;

    return x | y;
