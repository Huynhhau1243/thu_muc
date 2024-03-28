#include <iostream>
using namespace std;
// int main()
// {
//     int *dau, *p, *q, n, tam;
//     cout << "cho bt so luong phan tu cua day: ";
//     cin >> n;
//     dau = new int[n];
//     for (p = dau; p < dau + n; p++)
//     {
//         cout << "so thu " << p - dau + 1 << ": ";
//         cin >> *p;
//     }
//     for (p = dau; p < dau + n - 1; p++)
//     {
//         for (q = p +* 1; q < dau; q++)
//         {
            
//         }
//     }
// }
int main()
{
    int a[4] = {1,2,3,4};
    int b[4] = {4,5,6};
    int c[4] = {9,7,7,3};
    int i, j;
    int *p[3] = {a,b,c};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << *p[i] << " ";
        }
        cout << endl;
    }

}