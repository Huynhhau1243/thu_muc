#include <iostream>
#include <cmath>

void hinhtron(int r){
    const float pi = 3.14;
    float chuvi = 2 * pi * r;
    float dientich = pi * pow(r, 2);
    std::cout << "Chu vi hinh tron = " << chuvi <<"\n";
    std::cout << "Dien tich hinh tron = " << dientich;
};
int main(){
    int r; 
    std::cout << "Nhap ban kinh r = "; 
    std::cin >> r;
    hinhtron(r);

}
