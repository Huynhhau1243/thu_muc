#include<iostream>
#include <cmath>
int main(){
    // Nhap So Km
    double SoKm;
    std::cout << "SoKm = ";
    std::cin >> SoKm;
    // Hang so KmDau va KmSau
    const double KmDau = 15000;
    const double KmSau = 12000;
    // Tinh Tien thue va Tienxe
    double Tienxe = KmDau + KmSau * (SoKm - 1);
    double ThueVAT = 0.1 * Tienxe;
    // Tinh Tong tien
    double Tongtien = ThueVAT + Tienxe;

    // Xuat ra Tong tien
    std::cout << "=> Tong tien = " << Tongtien;
}