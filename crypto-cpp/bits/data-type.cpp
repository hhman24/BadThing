// C++ program to Demonstrate the sizes of data types
#include <iostream>
#include <limits.h>
#include <xmmintrin.h>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << " byte" << endl;

    cout << "char minimum value: " << CHAR_MIN << endl;

    cout << "char maximum value: " << CHAR_MAX << endl;

    cout << "Size of int : " << sizeof(int) << " bytes" << endl;

    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;

    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;

    cout << "Size of unsigned long int : " << sizeof(unsigned long long int) << " bytes" << endl;

    cout << "Size of float : " << sizeof(float) << " bytes" << endl;

    cout << "Size of double : " << sizeof(double) << " bytes" << endl;

    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

    cout << "Size of __int64 ~ long long, signed long long: " << sizeof(__int64) << " bytes" << endl;

    cout << "Size of __m64: " << sizeof(__m64) << " bytes" << endl;

    cout << "Size of __m128: " << sizeof(__m128) << " bytes" << endl;

    cout << "Size of __m128d: " << sizeof(__m128d) << " bytes" << endl;

    cout << "Size of __m128i: " << sizeof(__m128i) << " bytes" << endl;

    cout << "Size of int64_t: " << sizeof(int64_t) << " bytes" << endl;


    return 0;
}