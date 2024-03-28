#include <iostream>
#include <cmath>

int main()
{
    // Nhap xA, xB
    float xA;
    std::cout << "xA = ";
    std::cin >> xA;

    float xB;
    std::cout << "xB = ";
    std::cin >> xB;

    // Nhap yA, yB
    float yA;
    std::cout << "yA = ";
    std::cin >> yA;

    float yB;
    std::cout << "yB = ";
    std::cin >> yB;

    // Xuat ra Do dai vecto
    std::cout << "=> Do dai vecto = " << sqrt(pow((xA - xB), 2) + pow((yA - yB), 2)) << "\n";
}