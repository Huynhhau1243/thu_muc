#include <iostream>

int main()
{
    // nhap a va xuat a
    int a;
    std::cout << "Nhap a = "; // xuat nhap a
    std::cin >> a; // nhap b 
    
    // nhap b va xuat b
    int b;
    std::cout << "Nhap b = ";
    std::cin >> b;

    // nhap c va xuat c
    int c;
    std::cout << "Nhap c = ";
    std::cin >> c;

    std::cout << "=> Tong = " << a + b + c;
}