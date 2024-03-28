#include<iostream>

int main(){
    int maso; 
    std::cout << "Nhap ma so nhan vien cua ban: ";
    std::cin >> maso;
    int tien;
    if (maso == 1){
        std::cout <<  "Luong cua quan ly trong 1 tuan la = 2.000.000 VND" << "\n";
    }
    if (maso == 2){
        int gio;
        std::cout << "Nhap gio = ";
        std::cin >> gio;
        int x = 24000;
        if (gio < 40){
            tien = gio * x ;
        }
        else{
            if ( gio > 40 )
            {
                tien = (gio - 40) * x * 1.5;
            }
            
        }
        std::cout << "Luong cua nhan vien trong 1 tuan la: " << tien;
    }
    if (maso == 3){
        int mathang;
        std::cout << "Mat hang nhan vien ban ra : ";
        std::cin >> mathang;
        tien = 500000 + 0.07 * mathang * 20000;
        std::cout << "Tien = " << tien;
    }
    if (maso == 4){
        int loaihang; 
        std::cout << "Nhap loai hang: ";
        std::cin >> loaihang;

        int soluong;
        std::cout << "Nhap so luong = ";
        std::cin >> soluong;

        if (loaihang == 1){
            tien = 12000 * soluong;
        }
        if (loaihang == 2){
            tien = 20000 * soluong;
        }
        std::cout << "So tien nhan duoc la = " << tien;
    }
}