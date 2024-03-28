#include <iostream>

using namespace std;

// cau m
// ham hoan doi gia tri 2 bien k l
void hoandoi(int &k, int &l) 
{
    int bientam = k; // bien tam de luu k
    k = l;
    l = bientam;
}
// ham chen so x vao mang giam dan
void chensox(int a[], int n)
{
    for (int i = 0; i <= n + 1; i++) // tao vong lap i tu 0 den n + 1 (vi co them so chen nen so luong chu so trong mang la n + 1)
    {
        for (int j = i + 1; j <= n + 1; j++) // tao vong lap j tu i + 1 den n + 1
        {
            if (a[i] < a[j]) // neu a[i] < a[j] thi hoandoi
            {
                hoandoi(a[i], a[j]);
            }
        } 
        cout << a[i] << " "; // in ra mang da chen so va sap xep giam dan
    }
}

int main()
{
    int n; 
    cout << "nhap do dai mang: ";
    cin >> n;

    int *a; // con tro
    a = new int(n);
    // int mang = a[];

    for (int i = 0; i <= n + 1; i++) // tao vong lap de nhap mang va nhap lun so chen them vao mang de sap xep
    {
        
        if (i == n + 1) // neu i = n + 1 Vd: nhap n = 4 thi so chen se la so thu 5 
        {
            cout << "so thu " << i << " chen them vao: "; // chen them so vao mang
            cin >> a[i];
        }
        else // neu i <= n thi nhap vao mang cac so tu a[0] den a[n] nhu binh thuong
        {
            cout << "a[" << i << "]";
            cin >> a[i];
        }
    }
    cout << "---mang da nhap co them so chen---" << endl;
    for (int i = 0; i <= n + 1; i++) // tao vong lap de xuat mang co them luon so chen 
    {
        cout << a[i] << " ";
    }

    // cau m
    cout << endl;
    cout << "mang giam dan sau khi chen them x: ";
    chensox(a, n);
}
