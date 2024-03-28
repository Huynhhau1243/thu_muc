#include <iostream>

int demson(int n)
{
    // vì so Fibonacci rất lớn nên để long long
    long long fn, f0 = 0, f1 = 1;
    if (n < 0){
        std::cout << "Ban da nhap sai so!" << "\n";
    }   
    else {
        if (n == 0){
            std::cout << "0" << "\n";
        }
        if (n == 1){
            std::cout << "1" << "\n";
        }
        if (n >= 2){
            for (int i = 2; i <= n; i++)
            {
                // f0 <=> f (n - 1);
                // f1 <=> f (n - 2)
                fn = f0 + f1;
                f0 = f1;
                f1 = fn;
            }
            
            std::cout << "So = " << fn << "\n";
            std::cout << "So 1 = " << f0 << "\n";
            std::cout << "So 2 = " << f1 << "\n";
        }
    }
}
int main()
{
    int n;
    std::cout << "Nhap so Fibonacci = ";
    std::cin >> n;
    demson(n);
}