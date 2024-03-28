#include <iostream>
#include <cmath>
int main(){
    int a, b, c; 
    std::cout << "Nhap he so a = ";
    std::cin >> a;

    std::cout << "Nhap he so b = ";
    std::cin >> b;

    std::cout << "Nhap he so c = ";
    std::cin >> c;

    float delta = pow(b, 2) - (4 * a * c);

    if(delta < 0){
        std::cout << "Phuong trinh vo nghiem";
    }
    else if (delta == 0){
        std::cout << "Phuong trinh co nghiem kep la x1 = x2 = " << -(b / 2 * a) ;
    }
    else {
        if (delta > 0){
            float x1 = (-b + sqrt(delta)) / 2 * a ;  
            float x2 = (-b - sqrt(delta)) / 2 * a ;  
            std::cout << "Phuong trinh co hai nghiem phan biet: " << "\n";
            std::cout << "=> x1 = " << x1 << "\n";
            std::cout << "=> x2 = " << x2 << "\n";
        }
    }
}