#include<iostream>

int main(){
    int giostart;
    std::cout << "Nhap gio khach vo = ";
    std::cin >> giostart;
    int giosend;
    std::cout << "Nhap gio khach ra = ";
    std::cin >> giosend;
    int Tonggio = giosend - giostart;
    float Tien;
    if (Tonggio <= 3){
         Tien = Tonggio * 30000;
    }
    else if (Tonggio > 3)
    {
         Tien = ((Tonggio * 30000) - 3) + (Tonggio * 3000 * 0.3);
    }
    std::cout << "= " << Tien;
}