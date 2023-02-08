#ifndef BEZOUT_H
#define BEZOUT_H

#include<iostream>
using namespace std;

struct bezout
{
    long long gcd =  INT64_MIN;
    long long x;
    long long y;
};



bezout calBezout(long a, long b);

#endif // ! BEZOUT_H