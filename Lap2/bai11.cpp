#include <iostream>

int main(){
    float a; 
    std::cout << "tu so a = ";
    std::cin >> a;

    float b; 
    std::cout << "mau so a = ";
    std::cin >> b;

    float c;
    std::cout << "tu so b = ";
    std::cin >> c;

    float d;
    std::cout << "mau so b = ";
    std::cin >> d;

    do
    {
        if (b == 0)
        {
            std::cout << "Nhap lai mau so a = ";
            std::cin >> b;
        }
        else if (d == 0)
        {
            std::cout << "Nhap lai mau so b = ";
            std::cin >> d;
        }

    } while (b == 0 || d == 0);
    
    float phansoA = a / b;
    float phansoB = c / d;

    std::cout << "Tong = " << phansoA + phansoB << "\n";
    std::cout << "Tich = " << phansoA * phansoB << "\n";
    std::cout << "Thuong = " << phansoA / phansoB << "\n";
    std::cout << "Hieu = " << phansoA - phansoB;

}