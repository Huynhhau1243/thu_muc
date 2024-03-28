#include<iostream>

void tinh(int N){
    int donvi = N % 10 ; 
    int chuc = (N / 10) % 10;
    int tram = (N / 100) % 10;
    int nghin = N / 1000;
    int tong = donvi + chuc + tram + nghin;
    std::cout << "Don vi = " << donvi << "\n" << "Chuc = " << chuc << "\n" << "Tram = " << tram << "\n" << "Nghin = " << nghin << "\n";
    std::cout << "=> tong = " << tong;
}

int main(){
    int N;
    std::cout << "Nhap N = ";
    std::cin >> N; 

    tinh(N);
}
