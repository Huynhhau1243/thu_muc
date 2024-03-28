#include <iostream>
#include <string>

void Xephanhkiem(float toan, float ly, float hoa, float tong, char hanhkiem, std::string name){
    if (tong <= 3 || hanhkiem == 'D') {
        std::cout << "+ Hoc sinh "<< name << " co Diem trung binh la: " << tong << "\n";
        std::cout << "+ Co hanh kiem la " << hanhkiem << "\n";
        std::cout << "=> Duoc xep vao hoc luc: YEU";
    }
    else if(tong <= 5 || hanhkiem == 'C'){
        std::cout << "+ Hoc sinh " << name << " co Diem trung binh la: " << tong << "\n";
        std::cout << "+ Co hanh kiem la " << hanhkiem << "\n";
        std::cout << "=> Duoc xep vao hoc luc: TRUNG BINH";
    }
    else if (tong <= 7 || hanhkiem == 'B'){
        std::cout << "+ Hoc sinh " << name << " co Diem trung binh la: " << tong << "\n";
        std::cout << "+ Co hanh kiem la " << hanhkiem << "\n";
        std::cout << "=> Duoc xep vao hoc luc: KHA";
    }
    else if (tong <= 8 || hanhkiem == 'A'){
        std::cout << "+ Hoc sinh " << name << " co Diem trung binh la: " << tong << "\n";
        std::cout << "+ Co hanh kiem la " << hanhkiem << "\n";
        std::cout << "=> Duoc xep vao hoc luc: GIOI";
    }
    else {
        std::cout << "+ Hoc sinh " << name << " co Diem trung binh la: " << tong << "\n";
        std::cout << "+ Co hanh kiem la " << hanhkiem << "\n";
        std::cout << "=> Duoc xep vao hoc luc: XUAT XAC";
    }
}
int main(){
    std::string name;
    std::cout << "Nhap ten hoc sinh: ";
    getline(std::cin, name);

    float toan;
    std::cout << "Nhap diem mon toan = ";
    std::cin >> toan;
    
    float ly;
    std::cout << "Nhap diem mon ly = ";
    std::cin >> ly;
    
    float hoa;
    std::cout << "Nhap diem mon hoa = ";
    std::cin >> hoa;
    
    float tong = (toan + ly + hoa) / 3;

    std::cout << "Nhap hanh kiem xet tren lop: ";
    char hanhkiem;
    std::cin >> hanhkiem;
    Xephanhkiem(toan, ly, hoa, tong, hanhkiem, name);
}