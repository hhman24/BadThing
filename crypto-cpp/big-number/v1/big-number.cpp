#include "big-number.h"

#define max(x, y) (((x) >= (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

const uint64_t MAX_BASE_2xx64_INT = 0xFFFFFFFFFFFFFFFF;
const uint64_t MID_BASE_2xx64_INT = 0x8000000000000000;

int overflow_detection(uint64_t x, uint64_t y)
{
    return (max(x, y) >= MID_BASE_2xx64_INT && min(x, y) >= MID_BASE_2xx64_INT) || !(max(x, y) < MID_BASE_2xx64_INT && min(x, y) < MID_BASE_2xx64_INT) || (min(x, y) > MAX_BASE_2xx64_INT - max(x, y));
}

BigInt bigIntConstructor(bool sign, int size, ...)
{

    BigInt n;
    n.value = (uint64_t*)malloc(sizeof(uint64_t[size]));
    va_list blocks;
    va_start(blocks, size);
    for (int i = 0; i < size; i++)
    {
        n.value[i] = va_arg(blocks, uint64_t);
        printf("%d ", n.value[i]);
    }
    printf_s("\n");

    n.sign = sign;
    n.size = size;
    n.hex = (char *)malloc(size * 16 + 1); // problem
    n.hex[0] = '\0';

    printf("%d\n", size);
    for (int i = 0; i < size; i++)
    {
        char x[17];
        printf("%d\n", n.value[i]);
        sprintf_s(x, "%X", n.value[i]);
        printf("%s\n", x);
        strcat(n.hex, x);
    }

    return n;
}

void bigIntDestructor(BigInt *bignum)
{
    free(bignum->value);
    free(bignum->hex);
}

// BigInt addBigInt(const BigInt* a, const BigInt* b)
// {

// }
