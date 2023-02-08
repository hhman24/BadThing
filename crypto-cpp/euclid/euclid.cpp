#include "euclid.h"

long long gcd(long a, long b)
{
    if(a < 0 || b < 0)
    {
        return INT64_MIN;
    }

    if (0 < a < b) // a = b , b = a
    {
        long t = a;
        a = b;
        b = t;
    }

    while (b > 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}