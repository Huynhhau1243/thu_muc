#include <iostream>

using namespace std;

int fibo(int n) // ham tinh so fibo thu n
{
    if (n > 3)
    {
        // dung 3 bien tam la 3 so fibo dau tien de tinh so fibo thu 4 tro di
        int fibo0 = 0;
        int fibo1 = 1;
        int fibo2 = 1;
        for (int i = 4; i <= n; i++) // tao vong lap tu 4 den n
        {
            // so fibo sau la tong cua 2 so fibo truoc 
            fibo0 = fibo1 + fibo2; // gan gia tri fibo0 = fibo1 + fibo2
            fibo1 = fibo2; // gan gia tri fibo1 = fibo2 
            fibo2 = fibo0; // gan gia tri fibo2 = fibo0 
            // VD fibo0 = fibo1 + fibo 2 = 1 + 1 = 2 => fibo2 se bang 2 va fibo1 se bang 1 cu the tiep tuc de tinh so fibo thu n 
        }
        return fibo0; // tra ve gia tri so fibo thu n can tim
    }
    if (n == 1) // so fibo thu nhat la 0
    {
        int fibo0 = 0;
        return fibo0; // so fibo thu nhat la 0
    }
    if (n == 2) // so fibo thu hai la 1
    {
        int fibo0 = 1;
        return fibo0; // so fibo thu nhat la 0
    }
    if (n == 3) // so fibo thu ba la 1
    {
        int fibo0 = 1;
        return fibo0; // so fibo thu nhat la 0
    }
}

int main()
{
    int n;
    cout << "nhap n = ";
    cin >> n;

    cout << "so fibonacci thu " << n << " la: " << fibo(n);
}