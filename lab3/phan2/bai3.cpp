#include <iostream>

using namespace std;
// cau b
// ham dem so am trong mang
int demsoam(int A[10][10], int m, int n)
{
    int demso = 0; // bien dem so am 
    for (int i = 0; i <= m; i++) // tao vong lap i va j de lay ra cac so trong mang
    {
        for (int j = 0; j <= n; j++)
        {
            if (A[i][j] < 0) // neu so do < 0 thi bien dem tang len 1
            {
                demso++;
            }
        }
    }
    return demso; // tra ve gia tri bien dem so am
}
// câu a
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

    cout << "so luong so am trong mang: " << demsoam(A, m, n);
}

