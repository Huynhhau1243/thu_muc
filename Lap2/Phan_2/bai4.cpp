#include <iostream>
#include <cmath>
bool kiemtrasnt(int n){
    if (n < 2){
        return false;
    }
    else{
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
};

int main(){
    int n;
    std::cout << "Nhap vao so nguyen duong = ";
    std::cin >> n;
    do
    {
        if (n < 0){
            std::cout << "Vui long nhap lai so nguyen duong = ";
            std::cin >> n;
        }
    } while (n < 0);
    
    if (kiemtrasnt(n) == false){
        std::cout << "n khong phai la so nguyen to" << "\n";
    }
    if(kiemtrasnt(n) == true) {
        std::cout << "n la so nguyen to" << "\n";
    }


}