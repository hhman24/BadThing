#include "fast_power.h"

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}

/**
 * O(log(b))
 *
 */
bigInteger binaryPower(bigInteger a, bigInteger b)
{
    // // C1 recursion
    // if(b == 0) return 1;
    // bigInteger tmp = binaryPower(a, b/2);
    // bigInteger result = tmp * tmp;

    // if(b % 2 == 1) result *= a; // Odd number

    // C2 iteration 
    /**
     * 3^20
     * a = 3*3, b = 10, (3^2)^10
     * a = 3*3*3*3, b = 5, (3^4)^5
     * result = 3*3*3*3, a = 3*3*3*3*3*3*3*3, b = 2, (3^8.3^2)^2 =>  
     * a = 3*3*3*3*3*3*3*3*3*3*3*3*3*3*3*3, b = 1, 
     * b = 0, result = 3*3*3*3*3*3*3*3*3*3*3*3*3*3*3*3*3*3*3*3
     * luy thua 2 so hang duoc tinh trk do
     * Phan tinh thanh dang nhi phan nho shif >> ??
    */
    bigInteger result = 1;

    while (b > 0)
    {
        if (b % 2 == 1) // base case
        {
            result *= a; // odd number 
        }
        a *= a;
        b /= 2;
    }

    return result;
}
