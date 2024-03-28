#include <iostream>


int USCLNa(int a, int b){
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int USCLNb(int b, int c){
    while (b != c)
    {
        if (b > c)
        {
            b = b - c;
        }
        else
        {
            c = c - b;
        }
    }
    return b;
};

int USCLNc (int c , int a){
    while (a != c)
    {
        if (a > c)
        {
            a = a - c;
        }
        else
        {
            c = c - a;
        }
    }
    return c;
}

int USCLN(int a, int b, int c){
    int max = 0;
    std::cout << "Uoc (" <<a<< ")" << " = "; 
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0){
            std::cout << i << ",";
        }
    }

    std::cout << "\n";
    std::cout << "Uoc (" << b << ")" << " = ";
    for (int j = 1; j <= b; j++)
    {
        if (b % j == 0)
        {
            std::cout << j << ",";
        }
    }
    std::cout <<"\n";
    std::cout << "Uoc (" << c << ")" << " = ";
    for (int z = 1; z <= b; z++)
    {
        if (c % z == 0)
        {
            std::cout << z << ",";
        }
    }
    int test = 0;



}
int main(){
    int a, b, c;
    std::cout << "Nhap a = ";
    std::cin >> a;

    std::cout << "Nhap b = ";
    std::cin >> b;

    std::cout << "Nhap c = ";
    std::cin >> c;
    USCLN(a, b, c);
    std::cout << "\n";
    std::cout << "UCLN(a, b) + UCLN(b, c) + UCLN(a, c) = " << USCLNa(a, b) + USCLNb(b, c) + USCLNc(a, c);
}