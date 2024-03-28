#include<iostream>

void phep_tinh(int a, int b, int c) {
    int tong = a + b + c;
    int tich = a * b * c;
    std::cout << "=> Tong = " << tong << "\n";
    std::cout << "=> Toch = " << tich;
};

int main()
{
    int a; 
    std::cout << "Nhap a = "; 
    std::cin >> a;

    int b;
    std::cout << "Nhap b = ";
    std::cin >> b;

    int c;
    std::cout << "Nhap c = ";
    std::cin >> c;

    phep_tinh(a,b,c);
}