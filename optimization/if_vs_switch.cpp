#include <iostream>
#include <string>

void printColor(std::string color)
{
    std::cout << "Your color is " << color << std::endl;
};

int main()
{
    int userNumber;

    std::cout << "Enter a number between 1 and 3: " << std::endl;

    std::cin >> userNumber;

    // Not so good way

    if (userNumber == 1)
    {
        printColor("Red");
    }
    else if (userNumber == 2)
    {
        printColor("Green");
    }
    else if (userNumber == 2)
    {
        printColor("Blue");
    }
    else
    {
        printColor("Black");
    }

    // Better way

    switch (userNumber)
    {
    case 1:
        printColor("Red");
        break;
    case 2:
        printColor("Green");
        break;
    case 3:
        printColor("Blue");
        break;
    default:
        printColor("Black");
    }

    return 0;
}