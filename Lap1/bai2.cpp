#include <iostream>

void HCN(int a, int b) {
    int chuvi = (a + b) * 2;
    int dientich = a * b;
    std::cout << "=> Chu vi Hinh Chu Nhat = " << chuvi << "\n";
    std::cout << "=> Dien tich Hinh Chu Nhat = " << dientich;
}


int main() {
    
    int a; // a la kieu so nguyen
    std::cout << "Nhap do dai a = "; // yeu cau nguoi dung nhap vao
    std::cin >> a; // lưu dữ liệu vừa input vào bien a

    int b;
    std::cout << "Nhap do dai b = ";
    std::cin >> b;
    HCN(a, b);
}