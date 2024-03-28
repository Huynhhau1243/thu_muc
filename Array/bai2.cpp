#include <iostream>


void Demchieudai(int n){
    int dem = 0;
    while (n != 0)
    {
        n /= 10;
        ++dem;
    }
    std::cout << dem;
    
}

int main(){
    long n;
    std::cout << "Nhap so ban muon dem do dai: ";
    std::cin >> n;
   
    Demchieudai(n);
}