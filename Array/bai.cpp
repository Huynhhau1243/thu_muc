#include<iostream>

int soDaoNguoc(int n) {
    int donvi = n % 10;
    int chuc = n / 10 % 10;
    int tram = n / 100 % 10;
    int nghin = n / 1000 % 10;
    int trucnghin = n / 10000 % 10;
    int tramnghin = n / 100000 % 10;
    int tong = (donvi * 100000) + (chuc * 10000) + (tram * 1000) + (nghin * 100) + (trucnghin * 10) + (tramnghin) ;
    std::cout << tong;
}
int main() {
    int n;
    std::cout << "Nhap mot day so ban muon dao nguoc:  ";
    std::cin >> n;
    soDaoNguoc(n);
}