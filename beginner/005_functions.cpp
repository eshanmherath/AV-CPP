#include <iostream>

float GetDisplacement(float, int); // declaration only

/*
If the function is defined above its usage, then no need to have a separate declaration.
*/
float GetSpeed(float displacement, int time_delta) // definiation only
{
    return displacement / time_delta;
}

int main()
{
    std::cout << "Welcome to Autonomous World" << std::endl;

    float displacement = 10.0;
    int time_delta = 2;

    float speed = GetSpeed(displacement, time_delta);
    std::cout << "The Speed is: " << speed << std::endl;

    displacement = GetDisplacement(speed, time_delta);
    std::cout << "The Displacement is: " << displacement << std::endl;

    return 0;
}

/*
If the function is defined below its usage, then it needs to be declared above the usage.
*/
float GetDisplacement(float speed, int time_delta) // definiation only
{
    return speed * time_delta;
}