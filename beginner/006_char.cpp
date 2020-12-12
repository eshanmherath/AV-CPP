#include <iostream>

int main()
{
    std::cout << "Welcome to Autonomous World" << std::endl;

    char character = 'A'; // Need single quotes

    // Maximum number that can hold is 127
    // Also stores as the corresponding Ascii Character 'A'
    // If printed it will print 'A'
    char number = 65; 

    std::cout << "\n" << number << std::endl;

    // To print as a number, use int casting
    std::cout << (int) number << std::endl;

    //Maximum number that can hold is 127. 
    //128 will implicitly casted to -128
    //It wraps around
    char number2 = 128; 
    std::cout << "\n" << number2 << std::endl;
    std::cout << (int) number2 << std::endl;

    char number3 = 129; 
    std::cout << "\n" << number3 << std::endl;
    std::cout << (int) number3 << std::endl;

    return 0;
}