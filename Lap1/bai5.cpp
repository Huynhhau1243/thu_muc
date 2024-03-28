#include <iostream>

void dtb(float toan, float ly, float hoa){
    float DTB = (toan + ly + hoa) / 3;
    std::cout << "=> Diem trung binh = " << DTB ;    
}
int main(){
    float toan;
    std::cout << "Nhap diem toan: ";
    std::cin >> toan;

    float ly;
    std::cout << "Nhap diem ly: ";
    std::cin >> ly;

    float hoa;
    std::cout << "Nhap diem hoa: ";
    std::cin >> hoa;

    dtb(toan, ly, hoa);
}