#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "nhap bac cua da thuc: ";
    cin >> n;
    int a[100]; // khai bao mang a do dai mang la 100
    for (int i = n; i >= 0; i--) // tao vong lap tu n toi 0 de nhap he so cua x^ tuong ung
    {
        cout << "nhap he so cua x^" << i << " ";
        cin >> a[i];
    }

    cout << "da thuc vua nhap f(x) = "; // in ra da thuc vua nhap 

    for (int i = n; i >= 0; i--) // tao vong lap de in ra da thuc vua nhap
    {
        if (i == 0) // neu i = 0 thi x^0 = 1 nen se in ra he so luon 
        {
            cout << a[i];
        }
        else // neu i khac 0 thi se in ra he so kem x^i tuong ung
        {
            cout << a[i] << "x^" << i << " + ";
        }
    }

    cout << endl; 

    long fx = 0; // bien tam de tinh gia tri da thuc
    int x;
    cout << "nhap gia tri cua x: ";
    cin >> x;
    for (int i = n; i >= 0; i--) // tao vong lap de tinh gia tri da thuc
    {
        fx = fx + a[i] * pow(x, i);
    }
    cout << "f(" << x << ") = " << fx;
}
