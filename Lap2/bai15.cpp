#include <iostream>

int main(){
    int n;
    std::cout << "Nhap so nguyen hai chu so: ";
    std::cin >> n;
    
    int a = n / 10; // a la chuc
    int b = n % 10; // b la don vi


    std::cout << "a = " << a <<"\n";
    std::cout << "b = " << b << "\n";

    std::cout << "So vua nhap => " ;
    switch (a)
    {
    case 1:
        std::cout << "muoi ";
        break;
    case 2:
        std::cout << "hai muoi ";
        break;
    case 3:
        std::cout << "ba muoi ";
        break;
    case 4:
        std::cout << "bon muoi ";
        break;
    case 5:
        std::cout << "nam muoi ";
        break;
    case 6:
        std::cout << "sau muoi ";
        break;
    case 7:
        std::cout << "bảy muoi ";
        break;
    case 8:
        std::cout << "tam muoi ";
        break;
    case 9:
        std::cout << "chin muoi ";
        break;
    }


    switch (b)
    {
    case 1:
        std::cout << "mot ";
        break;
    case 2:
        std::cout << "hai ";
        break;
    case 3:
        std::cout << "ba ";
        break;
    case 4:
        std::cout << "bon ";
        break;
    case 5:
        std::cout << "lam ";
        break;
    case 6:
        std::cout << "sau ";
        break;
    case 7:
        std::cout << "bay ";
        break;
    case 8:
        std::cout << "tam ";
        break;
    case 9:
        std::cout << "chin ";
        break;
    }
}
