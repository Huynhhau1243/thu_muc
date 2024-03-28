#include <iostream>

int main()
{
    int n;
    std::cout << "nhap so n = ";
    std::cin >> n;
    int tich = 1;

    std::cout << "Cac so chan la :" ;
        for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
            {
                tich *= i;
                std::cout << i << " ";
            }
        }
        else{
            if(n % 2 != 0){
                if (i % 2 != 0){
                    tich *= i;
                    std::cout << i << " ";
                }
            }
        }
    }
    std::cout << "\n";
    std::cout << "n!! = " << tich;
}