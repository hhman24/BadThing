// 
// Demo big number
// 03/12/2022
//
// main.cpp
// by hhman

// #include"../v1/big-number.h"
#include"../v2/big-int.h"

int main()
{

    // bigInt x(true, 4, 23, 12, 34, 25);
    // x.printHex();
    // BigInt a = bigIntConstructor(false, 3, 0x23AB, 0xCD93, 123456789);
    // printf("%s", a.hex);

    bigInt a(512, false);

    cout << a.toBinary() << endl;


    return 0;
}