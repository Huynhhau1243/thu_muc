#include <iostream>

using namespace std;

// cau c
// ham tim so lon nhat trong mang
void timmax(int A[10][10], int m, int n)
{
    int max = A[0][0]; // cho bien max bang A[0][0]
    for (int i = 0; i <= m; i++) // tao 2 vong lap de lay A[i][j] so sanh voi max
    {
        for (int j = 0; j <= n; j++)
        {
            if (A[i][j] > max) // neu A[i][j] > max thi gan max = A[i][j] va tiep tuc cho den het mang
            {
                max = A[i][j];
            }
        }
    }
    cout << max; // tra ve so lon nhat trong mang
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

    cout << "so lon nhat trong mang: ";
    timmax(A, m, n);
}