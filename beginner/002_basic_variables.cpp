#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::cout << "Welcome to Autonomous World" << std::endl;

    // Check the file 006 for the upper and lower limits of some of these data types

    int is_active = true; // bool

    short robots = 1; // short

    int robot_wheels = 437647; // integer

    long distance_traveled = 437647238; // long

    long long alive_time_seconds = 4376472384333343; //long long

    float height_to_camera = 1.232; // float | Size: 4 bytes | Precision: 7 decimal digits precision

    double range_finder_measurement = 1.232732; // double | Size: 8 bytes | Precision: In general, 15 decimal digits precision

    std::string robot_name = "Mesee"; // string

    std::vector<int> robot_world_1d = {1, 2, 3}; //  1d vector (like a list in Python)

    std::vector<std::vector<int>> robot_world_2d = {{1, 2, 3}, {4, 5, 6}}; // 1d vector ( like a 2d matrix in Python)

    std::cout << "The robot '" << robot_name << "' has " << robot_wheels << " wheels and its camera is at " << height_to_camera << " meters from ground" << std::endl;

    return 0;
}