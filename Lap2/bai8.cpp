#include <iostream>

void Max(int a, int b, int c, int d)
{
    int max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d){
        max = d;
    }
    std::cout << max << " la so lon nhat" << "\n";
    // tim so nho nhat
    int min = a; 
    if (min > b){
        min = b;
    }
    if (min > c){
        min = c;
    }
    if (min > d){
        min = d;
    }
    std::cout << min << " la so be nhat";
};
int main()
{
    int a;
    std::cout << "a = ";
    std::cin >> a;

    int b;
    std::cout << "b = ";
    std::cin >> b;

    int c;
    std::cout << "c = ";
    std::cin >> c;

    int d;
    std::cout << "d = ";
    std::cin >> d;
    Max(a, b, c, d);
}