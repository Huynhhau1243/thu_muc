#include <iostream>

int main(){
    int thamnien;
    std::cout << "Nhap thang = ";
    std::cin >> thamnien;
    float heso ; 
    int luongbasic = 65000;

    if (thamnien < 12 ){heso =1.92;}
    else if (thamnien >= 12){heso = 2.34;}
    else if (thamnien >= 36){heso = 3;}
    else if (thamnien >= 60){heso = 4.5;}
    float Luong = heso * luongbasic;
    std::cout << "Luong cua nhan vien la = " << Luong;
}