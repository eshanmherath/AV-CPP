#include <iostream>
#include <string>

int main()
{
    std::cout << "Welcome to Autonomous World" << std::endl;

    int robot_wheels = 4; // integer

    float height_to_camera = 1.232;  // float

    std::string robot_name = "Mesee"; // string

    std::cout << "The robot '" << robot_name << "' has " << robot_wheels << " wheels and its camera is at " << height_to_camera << " meters from ground" << std::endl;

    return 0;
}