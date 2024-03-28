#include <iostream>

using namespace std;

int fibonacciM(int m) // ham tim so fibo thu M
{
    if (m > 3)
    {
        // dung 3 bien tam la 3 so fibo dau tien de tinh so fibo thu 4 tro di
        int fibo0 = 0; 
        int fibo1 = 1;
        int fibo2 = 1;
        for (int i = 4; i <= m; i++) // tao vong lap tu 4 den m
        {
            // so fibo sau la tong cua 2 so fibo truoc 
            fibo0 = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = fibo0;
            // VD fibo0 = fibo1 + fibo 2 = 1 + 1 = 2 => fibo2 se bang 2 va fibo1 se bang 1 cu the tiep tuc de tinh so fibo thu M
        }
        return fibo0; // tra ve so fibo thu M
    }
    if (m == 1) // so fibo thu nhat la 0
    {
        int fibo0 = 0;
        return fibo0;
    }
    if (m == 2) // so fibo thu hai la 1
    {
        int fibo0 = 1;
        return fibo0;
    }
    if (m == 3) // so fibo thu ba la 1
    {
        int fibo0 = 1;
        return fibo0;
    }
}

int fibonacciN(int n) // ham tim so fibo thu N
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
            fibo0 = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = fibo0;
            // VD fibo0 = fibo1 + fibo 2 = 1 + 1 = 2 => fibo2 se bang 2 va fibo1 se bang 1 cu the tiep tuc de tinh so fibo thu N
        }
        return fibo0; // tra ve so fibo thu N
    }
    if (n == 1) // so fibo thu nhat la 0
    {
        int fibo0 = 0;
        return fibo0;
    }
    if (n == 2) // so fibo thu hai la 1
    {
        int fibo0 = 1;
        return fibo0;
    }
    if (n == 3) // so fibo thu ba la 1
    {
        int fibo0 = 1;
        return fibo0;
    }
}

int tongsofibochan(int m, int n) 
{
    int tongfibochan = 0; // bien tam de tinh tong so fibo chan
    int x = fibonacciM(m); // gan so fibo thu M vao x

    while (x <= fibonacciN(n)) // tao vong lap voi dieu kien lap la x <= so fibo thu N
    {
        if (x % 2 == 0) // neu thoa thi cong so fibo thu M (da gan la x) vao tongfibochan
        {
            tongfibochan += x;
        }
        // m tang len 1 de den so fibo tiep theo
        m += 1;
        x = fibonacciM(m);
    }
    return tongfibochan; // tra ve tongfibochan
}

int main()
{
    int m;
    cout << "nhap M = ";
    cin >> m;
    int n;
    cout << "nhap N = ";
    cin >> n;

    cout << "so fibo thu M = " << fibonacciM(m) << endl;
    cout << "so fibo thu N = " << fibonacciN(n) << endl;
    cout << "tong so fibo chan trong day: " << tongsofibochan(m, n);
}