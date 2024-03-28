#include <iostream>
#include <cmath>

void tinhtoan(float xA, float xB, float xC, float yA, float yB, float yC){
    // Tinh do dai vecto AB, AC va BC
    float AB = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));

    float AC = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));

    float BC = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));

    // Tinh Chu vi va Dien tich
    float Chu_vi = AB + AC + BC;
    float p = Chu_vi / 2;
    float Dien_tich = sqrt(p * (p - AB) * (p - AC) * (p - BC));

    // xuat ra chu vi dien tich
    std::cout << "=> Chu vi = " << Chu_vi << "\n";
    std::cout << "=> Dien tich = " << Dien_tich;
}

int main()
{
    // Nhap xA, xB, xC
    float xA;
    std::cout << "xA = ";
    std::cin >> xA;

    float xB;
    std::cout << "xB = ";
    std::cin >> xB;

    float xC;
    std::cout << "xC = ";
    std::cin >> xC;

    // Nhap yA, yB, yC
    float yA;
    std::cout << "yA = ";
    std::cin >> yA;

    float yB;
    std::cout << "yB = ";
    std::cin >> yB;

    float yC;
    std::cout << "yC = ";
    std::cin >> yC;

    tinhtoan(xA, xB, xC, yA, yB, yC);

}