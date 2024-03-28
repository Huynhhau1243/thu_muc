#include <iostream>
#include <cmath>

int main()
{
    const double PI = 3.14;
    const int start_degree = 0;
    const int end_degree = 180;
    const int step = 5;

    std::cout << "Goc \t    Sin \t      Cos \t    Tan\n";

    for (int degree = start_degree; degree <= end_degree; degree += step)
    {
        double radians = degree * (PI / 180.0);
        double sin = std::sin(radians);
        double cos = std::cos(radians);
        double tan = std::tan(radians);

        std::cout << degree << "\t " << sin << "\t " << cos << "\t ";

        // Check if tan is undefined (division by zero)
        if (degree % 90 == 0 && (degree / 90) % 2 != 0)
        {
            std::cout << "undefined\n";
        }
        else
        {
            std::cout << tan << "\n";
        }
    }

    return 0;
}