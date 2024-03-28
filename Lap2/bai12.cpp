#include <iostream>

int main(){
    char n;
    std::cout << "Nhap ky tu vao de! : ";
    std::cin >> n;

    if(isdigit(n)){
        std::cout << "Ban vua nhap: " << n << "\n";
        std::cout << "Chuoi vua nhap la So" << "\n";
    }
    if (islower(n))
    {
        std::cout << "Ban vua nhap: " << n << "\n";
        std::cout << "Chuoi vua nhap la chu Thuong" << "\n";
    }
    if(isupper(n)){
        std::cout << "Ban vua nhap: " << n << "\n";
        std::cout << "Chu vua nhap la chu Hoa" << "\n";
    }
}