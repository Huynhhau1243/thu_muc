#include <iostream>

int main(){
    int tich = 0;
    for (int i = 2; i <= 9; i++)
    {
        std::cout << "Bang cua chuong " << i << "\n";
        for (int j = 1; j <= 10; j++)
        {
            tich = i * j;
            std::cout << i << "x" << j << "=" << tich << "\n";
        }
    }
    
}
