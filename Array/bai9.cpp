#include <iostream>
#include<cmath>
int main(){
    std::cout << "Chuong trinh tinh gia tri da thuc bac n! \n";
    int n ;
    std::cout << "Nhap cap bac cua da thuc n = ";
    std::cin >> n;
    
    float a[100];
    for (int i = n; i >= 0; --i)
    {
        std::cout << "Nhap he so cua x^" << i << " = ";
        std::cin >> a[i];
    }
    std::cout << "Da thuc vua nhap f(x) = ";
    for (int i = n; i >= 0; --i)
    {
        if (i == 0){
            std::cout << a[i] ;
        }
        else{
            std::cout << a[i] << "x^" << i << " + ";
        }
    }
    std::cout << "\n";
    long long fx = 0;
    int x;
    std::cout << "Nhap gia tri cua x = ";
    std::cin >> x;
    for (int i = n; i >= 0; --i)
    {
        fx = fx + a[i] * pow(x, i);
    }
    std::cout << "f( " << x << " ) = " << fx ;
}