#include <iostream>

using namespace std;

double gthua(int &n, int &k) // ham tinh gthua
{
    double gtn = 1;
    double gtk = 1;
    double gtnk = 1; // bien tam
    for (int i = 1; i <= (n - k); i++) // vong lap tu 1 den (n - k)
    {
        gtnk = i * gtnk; // nhan gtnk voi i trong vong lap de co duoc (n - k)!
    }

    for (int i = 1; i <= n; i++) // vong lap tu 1 den n
    {
        gtn = i * gtn; // nhan gtn voi i trong vong lap de co duoc n!
    }

    for (int i = 1; i <= k; i++) // vong lap tu 1 den k
    {
        gtk = i * gtk; // nhan gtk voi i trong vong lap de co duoc k!
    }

    int gt = gtn / (gtk * gtnk);
    return gt;
}

int main()
{
    int n;
    cout << "nhap n = ";
    cin >> n;

    int k;
    cout << "nhap k = ";
    cin >> k;
    
    cout << "to hop chap k cua n: " << gthua(n, k);
}