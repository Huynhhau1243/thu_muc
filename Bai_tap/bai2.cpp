#include <iostream>

int main()
{
    int a; 
    std::cout << "Nhap canh a = ";
    std::cin >> a;

    int b;
    std::cout << "Nhap canh b = ";
    std::cin >> b;

    std::cout << "=> Chu vi hinh chu nhat = " << a * b << "\n";
    std::cout << "=> Dien tich hinh chu nhat = " << (a + b) * 2;
}