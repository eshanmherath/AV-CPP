#include <iostream>

int main()
{
    std::cout << "Welcome to Autonomous World" << std::endl;

    char character = 'A'; // Need single quotes

    // Maximum number that can hold is 127
    // Also stores as the corresponding Ascii Character 'A'
    // If printed it will print 'A'
    char number = 65;

    std::cout << "\n"
              << number << std::endl;

    // To print as a number, use int casting
    std::cout << (int)number << std::endl;

    //Maximum number that can hold is 127.
    //128 will implicitly casted to -128
    //It wraps around
    char number2 = 128;
    std::cout << "\n"
              << number2 << std::endl;
    std::cout << (int)number2 << std::endl;

    char number3 = 129;
    std::cout << "\n"
              << number3 << std::endl;
    std::cout << (int)number3 << std::endl;

    //But if we use unsigned char, then we can go up to 255
    unsigned char number4 = 128;
    std::cout << "\n"
              << number4 << std::endl;
    std::cout << (int)number4 << std::endl;

    unsigned char number5 = 255;
    std::cout << "\n"
              << number5 << std::endl;
    std::cout << (int)number5 << std::endl;

    // It will warn if 255 is exceeded. But will compile
    unsigned char number6 = 256;
    std::cout << "\n"
              << number6 << std::endl;
    std::cout << (int)number6 << std::endl;

    return 0;
}