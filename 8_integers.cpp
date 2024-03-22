#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    // 1 byte is of 8 bits

    printf("Size of char is %ld bits \n", sizeof(char) * 8); // Smallest Unit

    printf("Size of int is %ld bits \n", sizeof(int) * 8);
    printf("Size of unsigned int is %ld bits \n", sizeof(unsigned int) * 8);

    printf("Size of short int is %ld bits \n", sizeof(short int) * 8);

    printf("Size of long int is %ld bits \n", sizeof(long int) * 8);
    printf("Size of long int is %ld bits \n", sizeof(long) * 8);

    printf("Size of long long int is %ld bits \n", sizeof(long long int) * 8);

    printf("Size of int16_t is %ld bits \n", sizeof(int16_t) * 8);
    printf("Size of uint16_t is %ld bits \n", sizeof(uint16_t) * 8);

    int fun = 22;
    fun = 0x16; // hex code 0x
    fun = 0b10110; // binary code 0b
    printf("Value of fun is %d \n", fun);
    return 0;
}

/*
- int16_t always gives 16 bit no matter which system you use
- In recent version, we can use directly hex or binary value
- https://www.mathsisfun.com/binary-decimal-hexadecimal-converter.html
*/