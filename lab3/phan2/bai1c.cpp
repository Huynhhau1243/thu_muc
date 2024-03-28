#include <iostream>

using namespace std;

// cau c
// ham kiem tra tinh tang dan
bool ktrtang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // tao vong lap tu 0 den n - 1
    {
        if (a[i] > a[i + 1]) // so sanh so thu a[i] voi a[i + 1] (vd a[0] = 2 voi a[3] = 1)
        {
            return false; // neu dk tren dung thi return false 
        }
    }
    return true; // con lai return true
}
// ham kiem tra tinh giam dan
bool ktrgiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // tao vong lap tu 0 den n - 1
    {
        if (a[i] < a[i + 1]) // so sang so thu a[i] voi a[i + 1]
        {
            return false; // neu dk tren dung thi return false
        }
    }
    return true; // con lai return true
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

    // cau c
    if (ktrtang(a, n))
    {
        cout << "mang sap xep tang";
    }
    else if (ktrgiam(a, n))
    {
        cout << "mang sap xep giam";
    }
    else 
    {
        cout << "mang ko dc sap xep";
    }
}
