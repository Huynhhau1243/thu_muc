#include<iostream>
#include<cmath>
int main(){
    int a;
    std::cout << "Nhap do dai canh a = ";
    std::cin >> a;

    float chuvi = 4 * a;
    float dientich = pow(a, 2);
    float duongcheo = a * sqrt(2);
    std::cout << "Chu vi hinh vuong = " << chuvi << "\n";
    std::cout << "Dien tich hinh vuong = " << dientich << "\n";
    std::cout << "Do dai duong cheo cua hinh vuong la  = "  << duongcheo ;
}