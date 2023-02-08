#ifndef _BIGNUMBER_H_
#define _BIGNUMBER_H_
// libary

#include<stdio.h>
#include<stdint.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>

struct BigInt
{
    uint64_t *value;
    bool sign;
    int size;
    char *hex;
};

BigInt bigIntConstructor(bool sign, int size, ...);
void bigIntDestructor(BigInt *bignum);
// BigInt addBigInt(const BigInt* a, const BigInt* b);

/**
 * Carry and Brow
 * 
 * idea:
 * - 1: create 1 vector to store digit of number
 * 
*/
#endif // !BIG_NUMBER_H