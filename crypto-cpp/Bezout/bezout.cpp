#include "bezout.h"

bezout calBezout(long a, long b)
{
    bezout be;
    if (a < 0 || b < 0) return be;

    if (a < b)
    {
        long t = a;
        a = b;
        b = t;
    }

    if (b == 0)
    {
        be.gcd = a;
        be.x = 1;
        be.y = 0;
        return be;
    }

    long x2 = 1, x1 = 0, y2 = 0, y1 = 0;
}