# Bitwise Operator
$~~~~~~~~~~$ `Xử lý số lớn trên bit`
## & AND

## | OR
- `interestingly!! The bitwise OR of two numbers is just the sum of those two numbers if there is no carry involved, otherwise you just add their bitwise AND`

## ^ XOR
| a  | b  | a^b|
|----|----|----|
|1   |1   |0   |
|1   |0   |1   |
|0   |1   |1   |
|0   |0   |0   |

- `The bitwise XOR operator is the most useful operator from a technical interview perspective`
## << LEFT SHIFT

- Numer / 2
- least significant bits(bit ít quan trọng nhất)->replaced bit by zero
- `The left shift and right shift operators should not be used for negative numbers`

## >> RIGHT SHIFT

- Number * 2
- most significant bits(bit ít quan trọng nhất)->replaced bit by zero
- `The left shift and right shift operators should not be used for negative numbers`

## ~ NOT
```c++
    36 = 00100100 (In Binary)

    1's Complement = 11011011 

    2's Complement :   
    11011011
    +     1
    _________
    11011100    
```
>The bitwise complement of 35 = - (35 + 1) = -36 i.e. ~35 = -36

>The bitwise complement of -150 = - (-150 + 1) = - (-149) = 149 i.e. ~(-150) = 149

## NOTE

- `The bitwise operators should not be used in place of logical operators`
- `The & operator can be used to quickly check if a number is odd or even`
```c++
    #include <iostream>
    using namespace std;
    
    int main() {
    
        int x = 19 ;
        (x & 1) ? cout<<"Odd" : cout<< "Even" ;
        
        return 0;
    }
```

- The ~ operator should be used carefully. The result of ~ operator on a small number can be a big number if the result is stored in an unsigned variable. And the result may be a negative number if the result is stored in a signed variable (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit)

## Data type:
```c++
    __int8 nSmall;      // Declares 8-bit integer
    __int16 nMedium;    // Declares 16-bit integer
    __int32 nLarge;     // Declares 32-bit integer
    __int64 nHuge;      // Declares 64-bit integer

    // sized_int_types.cpp

    #include <stdio.h>

    void func(int i) {
        printf_s("%s\n", __FUNCTION__);
    }

    int main()
    {
        __int8 i8 = 100;
        func(i8);   // no void func(__int8 i8) function
                    // __int8 will be promoted to int
    }
```


