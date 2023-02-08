#include "big-int.h"

bigInt::bigInt(int no_bits, bool sign)
{
    srand(time(0));

    this->_no_bit = no_bits;
    this->_sign = sign;
    int size = no_bits / 64;
    this->_bits = new uint64_t[size];

    // store bit
    for (int i = 0; i < size; i++)
    {
        this->_bits[i] = rand();
        cout << this->_bits[i] << endl;
    }

    // case: negative

    // case: positive
    for (int i = 0; i < size; i++)
    {
        char x[65];
        sprintf_s(x, "%X", this->_bits[i]);
        printf("%s\n", x);
        // shifr bit
        for (int j = 63; j >= 0; j--)
        {
            if (this->_bits[i] & (1 << i))
            {
                this->_binarys += "1";
            }
            else
            {
                this->_binarys += "0";
            }
        }
    }
}

const string bigInt::toBinary() const
{
    return this->_binarys;
}

bigInt::~bigInt()
{
    if (this->_bits != NULL)
    {
        delete[] this->_bits;
    }
}