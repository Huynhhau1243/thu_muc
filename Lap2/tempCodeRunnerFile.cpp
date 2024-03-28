#include <iostream>

void Max(int a, int b, int c){
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    std::cout << max << " la so lon nhat";
};
int main(){
    int a;
    std::cout << "a = ";
    std::cin >> a;

    int b;
    std::cout << "b = ";
    std::cin >> b;
    
    int c;
    std::cout << "c = ";
    std::cin >> c;
    Max(a, b, c);
}