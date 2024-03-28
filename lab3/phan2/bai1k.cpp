#include <iostream>

using namespace std;

// cau k
// ham hoan doi gia tri 2 bien k l
void hoandoi(int &k, int &l) 
{
    int bientam = k; // bien tam de luu k
    k = l;
    l = bientam;
}
// ham sap xep mang giam dan
void sapxepgiamdan(int a[], int n)
{
    for (int i = 0; i <= n; i++) // tao vong lap i tu 0 den n
    {
        for (int j = i + 1; j <= n; j++) // tao vong lap j tu i + 1 den n
        {
            if (a[i] < a[j]) // neu a[i] < a[j] thi hoandoi
            {
                hoandoi(a[i], a[j]);
            }
        }
        cout << a[i] << " "; // in ra mang da sao xep giam dan
        
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
    int num;

    for (int i = 0; i <= n; i++) // tao vong lap de nhap mang
    {
        cout << "a[" << i << "]";
        cin >> a[i];
    }
    cout << "---mang da nhap---" << endl;
    for (int i = 0; i <= n; i++) // tao vong lap de xuat mang
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }

    // cau k
    cout << "sap xep mang giam dan: ";
    sapxepgiamdan(a, n);
}
