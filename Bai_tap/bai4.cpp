#include <iostream>

int main()
{
    int soLuong;
    std::cout << "Nhap so luong: ";
    std::cin >> soLuong;

    int donGia;
    std::cout << "Nhap don gia: ";
    std::cin >> donGia;

    float Tien = soLuong * donGia;
    float thueGiaTriGiaTang = 0.1 * Tien;

    std::cout << "=> Gia tien = " << Tien <<".000 VND" <<"\n";
    std::cout << "=> Thue = " << thueGiaTriGiaTang <<"%";
}
