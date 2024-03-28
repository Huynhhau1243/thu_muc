#include <iostream>

using namespace std;

// cau f
// ham hoan doi gia tri 
void hoandoi(int &a, int &b)
{
    int bientam = a;
    a = b;
    b = bientam;
}
// ham sap xep mang 1 chieu
void sxep1chieu(int C[], int c)
{
    for (int i = 0; i <= c; i++)
    {
        for (int j = i + 1; j <= c; j++)
        {
            if (C[i] < C[j])
            {
                hoandoi(C[i], C[j]);
            }
        }
    }
}
// ham chuyen mang 2 chieu thanh 1 chieu => truyen gia tri cho ham sap xep mang 1 chieu de sap xep
void sapxepgiamdan(int A[10][10], int m, int n)
{
    int B[100]; // khai bao mang 1 chieu B
    int b = 0; // bien tam de dem so luong phan tu trong mang 1 chieu
    for (int i = 0; i <= m; i++) // tao 2 vong lap i va j de lay cac phan tu cua mang 2 chieu cho vao mang 1 chieu
    {
        for (int j = 0; j <= n; j++)
        {
            B[b++] = A[i][j];
        }
        
    }

    cout << "mang sau khi sap xep giam dan: ";
    // goi ham sap xep mang 1 chieu de sap xep mang 1 chieu roi in ra 
    sxep1chieu(B, b); // 
    for (int i = 0; i < b; i++)
    {
        cout << B[i] << " ";
    }
}

int main()
{
    int m;
    cout << "nhap so hang: ";
    cin >> m;
    int n;
    cout << "nhap so cot: ";
    cin >> n;

    int A[10][10]; // khai bao mang 2 chieu voi 10 hang 10 cot 

    cout << "--- nhap mang 2 chieu A ---" << endl;
    for (int i = 0; i <= m; i++) // tao 2 vong lap i va j den nhap mang 2 chieu
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j]; 
        }
    }
    cout << "=> mang 2 chieu A da nhap <=" << endl;
    for (int i = 0; i <= m; i++) // tao 2 vong lap i va j de in ra mang 2 chieu
    {
        for (int j = 0; j <= n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    sapxepgiamdan(A, m, n);
}

