#include <iostream>
#include <string>

int main()
{
    std::cout << "Welcome to Autonomous World" << std::endl;

    int robotWheels = 4; // integer

    float heightToCamera = 1.232;  // float

    std::string robotName = "Mesee"; // string

    std::cout << "The robot '" << robotName << "' has " << robotWheels << " wheels and its camera is at " << heightToCamera << " meters from ground" << std::endl;

    return 0;
}