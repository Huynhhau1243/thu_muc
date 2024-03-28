#include <iostream>
#include <cmath>

void ptbac1(int a, int b){
    if (a > 0)
    {
       std::cout << "Nghiem x = " << -b / a;
    }
    else{
        std::cout << "Nghiem x = " << -b / a;
    }
    
}

int main(){
    int a;
    std::cout << "Nhap a = ";
    std::cin >> a;

    int b;
    std::cout << "Nhap b = ";
    std::cin >> b;
    ptbac1(a, b);

}