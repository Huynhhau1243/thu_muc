#include<iostream>

void tinhtoan(int soluong, int dongia) {
    float tien = soluong * dongia;
    float thue = 0.1 * tien;
    std::cout << "So tien phai tra = " << tien <<".000VND" <<"\n";
    std::cout << "Thue gia tri gia tang = " << thue;
}

int main(){
    int soluong;
    std::cout << "Nhap so luong = ";
    std::cin >> soluong;

    float dongia;
    std::cout << "Nhap don gia = ";
    std::cin >> dongia;

    tinhtoan(soluong, dongia);
}
