#include <iostream>

using namespace std;

void hoandoi(int &a, int&b)
{
    int bientam = a;
    a = b;
    b = bientam;
}
void xephangtang(int A[10][10], int m, int n)
{
    int B[100];
    int b = 0;
    for (int i = 0; i <= m; i++) 
    {
        for (int j = 0; j <= n; j++)
        {
            if (A[i][j] < A[i][j + 1])
            {
                hoandoi(A[i][j], A[i][j + 1]);
            }
            cout << A[i][j];
        } 
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
   
    xephangtang(A, m, n);
}

