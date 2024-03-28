#include<iostream>

int ktsln(int a, int b){
    if (a > b){
        std::cout << a << " La so lon nhat";
    }
    else {
        std::cout << b << " La so lon nhat";
    }
};

int main(){
    int a, b;
    std::cout << "Nhap a = ";
    std::cin >> a;

    std::cout << "Nhap b = ";
    std::cin >> b;
    ktsln(a, b);
}