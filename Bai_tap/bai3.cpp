// Bài 3: Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi và diện tích của hình tròn đó.
#include <iostream>
#include <cmath>

int main()
{
    const float pi = 3.14;
    int R; 
    std::cout << "Nhap ban kinh: ";
    std::cin >> R; 

    std::cout << "=> Chu vi hinh tron = " << 2 * pi * R << " " << "|| Cong thuc: 2 * pi * R" <<"\n";
    std::cout << "=> Dien tich hinh tron = "<<  pow((pi * R), 2) << " " << "|| Cong thuc: (pi * r) ** 2";
}