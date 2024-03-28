#include <iostream>

int ChanLe(int n){
    if (n % 2 == 0){
        std::cout << n <<" la so chan";
    }
    else {
        std::cout << n << " la so le";
    }
};
int main(){
    int n; 
    std::cout << "Nhap n = ";
    std::cin >> n;

    ChanLe(n);
}