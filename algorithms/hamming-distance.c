#include <stdio.h>

int main()
{
    printf("Hamming Distance!\n");
    return 0;
}
/*

int hamming_distance(unsigned x, unsigned y)
{
    int dist = 0;
    unsigned  val = x ^ y;

    // Count the number of bits set
    while (val != 0)
    {
        // A bit is set, so increment the count and clear the bit
        dist++;
        val &= val - 1;
    }

    // Return the number of differing bits
    return dist;
}

int hamming_distance(unsigned x, unsigned y)
{
    return __builtin_popcount(x ^ y);
}

// If your compiler supports 64-bit integers.
int hamming_distance(unsigned long long x, unsigned long long y)
{
    return __builtin_popcountll(x ^ y);
}

*/
