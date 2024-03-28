#include <iostream>

void DTB(int toan, int ly, int hoa) {
        std::cout <<"Diem trung binh: "<< (toan + ly + hoa) / 3;
};

int main(){
    int toan;
    std::cout << "Nhap diem toan: ";
    std::cin >> toan;

    int ly;
    std::cout << "Nhap diem ly: ";
    std::cin >> ly;

    int hoa;
    std::cout << "Nhap diem hoa: ";
    std::cin >> hoa;

    DTB(toan, ly, hoa);
}
