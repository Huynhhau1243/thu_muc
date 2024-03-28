#include <iostream>

int main(){
    int dem = 0;
    for (int i = 1; i <= 100; i ++){
        if (i % 3 == 0 || i % 7 == 0){
            dem++;
        }
    }
    std::cout << "So luong cac so nguyen chia het cho 3 hoac 7 la: " << dem <<" so" <<"\n";
    return 0;
}