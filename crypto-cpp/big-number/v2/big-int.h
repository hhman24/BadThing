#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>
#include <cstdarg>
#include <cstdint>
#include <ctime>
#include <string>
using namespace std;

/**
 * Devide into byte of block: 8ytes -> 64bits
 * 512 bits -> _no_bit: 8
 * 1024 bits -> _no_bit: 16
 * 2048 bits -> _no_bit: 32
 *
 */

class bigInt
{
private:
    uint64_t *_bits;
    string _binarys;
    int _no_bit;
    bool _sign; // true: negative, false: positive
public:
    // contructor
    bigInt(int no_bits, bool sign);      // contructor for random
    // bigInt(int no_bits, bool sign, ...); // contructor for array uint64_t 
    bigInt(const bigInt &a);             // Contructor by bigInt
    bigInt(const string *&binary);        // Contructor by string hex

    // Helper function:
    const string toBinary() const; // convert to string hex
    int size();           // return size of bit
    bool isPositive();

    /* * * * Operator Overloading * * * */

    // Destructor
    ~bigInt();
};

#endif // ! BIGINT_H