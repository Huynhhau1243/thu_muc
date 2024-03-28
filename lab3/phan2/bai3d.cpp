#include <iostream>

using namespace std;

// cau d
// ham tim hang co tong lon nhat
void hangmaxtong(int A[10][10], int m, int n)
{
    int x = 0; 
    int hangmaxtong;
    int tong = 0;

    for (int i = 0; i <= m; i++) // tao 2 vong lap i va j de tinh tong cac so trong hang
    {
        for (int j = 0; j <= n; j++)
        {
            tong += A[i][j]; // tinh tong cac so trong hang
        }
        if (tong > x) // neu tong lon hon bien tam x thi gan x = tong va hangmaxtong = i, tiep tuc den het hang
        {
            x = tong;
            hangmaxtong = i;
        }   
    }
    cout << hangmaxtong; // in ra hangmaxtong
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
    cout << "=> hang co tong lon nhat la: ";
    hangmaxtong(A, m, n);
}

