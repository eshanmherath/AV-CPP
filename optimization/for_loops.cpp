#include <iostream>
#include <vector>
#include <ctime>

// Bad
std::vector<std::vector<int>> GetNewGrid(int num_rows, int num_cols, int default_grid_value)
{

    std::vector<std::vector<int>> grid;
    std::vector<int> new_row;

    for (int i = 0; i < num_rows; i++)
    {
        new_row.clear();
        for (int j = 0; j < num_cols; j++)
        {
            new_row.push_back(default_grid_value);
        }
        grid.push_back(new_row);
    }

    return grid;
};

// Good
std::vector<std::vector<int>> GetNewGridOptimized(int num_rows, int num_cols, int default_grid_value)
{

    std::vector<std::vector<int>> grid;
    std::vector<int> new_row;

    for (int j = 0; j < num_cols; j++)
    {
        new_row.push_back(default_grid_value);
    }

    for (int i = 0; i < num_rows; i++)
    {
        grid.push_back(new_row);
    }

    return grid;
};

int main()
{

    std::cout << "\nTest started. This may take about half a minute..";

    std::clock_t start_t1, start_t2;
    double dt1, dt2;

    start_t1 = std::clock();

    std::vector<std::vector<int>> grid1 = GetNewGrid(50000, 50000, 10);

    dt1 = (std::clock() - start_t1) / (double)CLOCKS_PER_SEC;

    start_t2 = std::clock();

    std::vector<std::vector<int>> grid2 = GetNewGridOptimized(50000, 50000, 10);

    dt2 = (std::clock() - start_t2) / (double)CLOCKS_PER_SEC;

    std::cout << "First method took " << dt1 << " Seconds & Optimized method took " << dt2 << " Seconds";
}