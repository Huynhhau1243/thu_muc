#include <iostream>

int tinhdtb(float toan,float van,float anh, int sbd){
    float dtb = (toan + van + anh)/ 3;
    std::string name = ("A" , "B", "C", "D", "F", "X");
    while (sbd != 0)
    {
        for (int i = 1; i <= sbd; i++)
        {
            std::cout << i << " Nguyen van A" << " "<< "Co diem trung binh la: " << dtb << "\n";
        }
        break;
    }
    
    
}
int main(){
    int sbd;
    std::cout << "Nhap mssv: ";
    std::cin >> sbd;
    float toan;
    std::cout << "Nhap diem toan = ";
    std::cin >> toan;
    float van;
    std::cout << "Nhap diem van = ";
    std::cin >> van;
    float anh;
    std::cout << "Nhap diem anh = ";
    std::cin >> anh;
    tinhdtb(toan, van , anh, sbd);
    
}