#include <iostream>

using namespace std;

// cau a
// ham kiem tra so chan
bool kiemtrachan(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (a[i] % 2 == 0) // neu chia het cho 2 thi return true
        {
            return true; 
        }
        return false;
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

    // cau a
    if (kiemtrachan(a, n) == true) 
    {
        cout << "mang chua toan so chan" << endl;
    }
    else 
    {
        cout << "mang ko chua toan so chan" << endl;
    }
}