#include <iostream>
#include <cmath>

using namespace std;

int demso(int n) // ham dem so luong chu so
{
    int x = 0; // bien tam de dem so luong
    while(n != 0) // tao vong lap voi dieu kien lap la n khac 0
    {
        n = n / 10;
        x = x + 1; // bien tam tang len mot de dem so luong chu so
    }
    return x; // tra ve gia tri x la so luong chu so trong day
}

int main()
{
    int n;
    cout << "nhap so nguyen: ";
    cin >> n;

    int a = demso(n); // gan so luong chu so da dem o ham tren vao a
    // cout << a << endl;
    // cout << n << endl;

    int y = 0; // bien tam y de in ra so dao nguoc
    for (int i = 0; i < a; i++) // tao vong lap tu 0 den i 
    {
        int x = pow(10, i); // x = 10^i de khi chia se lay ra tung so trong day so da nhap
        y = n / x % 10; // VD 135 / 10^0 = 135 tiep tuc chia lay du cho 10 ta duoc 5 - cu the tang i len de xep nguoc thu tu cac so lai
        cout << y;
    }
}