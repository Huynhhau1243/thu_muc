#include <iostream>

using namespace std;

// cau b
// ham kiem tra so nguyen to
bool snt(int n)
{
    if (n < 2)
    {
        return false; // neu so do < 2 thi return false
    }
    else 
    {
        if (n == 2) // neu so do = 2 thi return false
        {
            return false; 
        }
        else
        {
            for (int i = 2; i < n; i ++) // tao vong lap tu 2 den n de kiem tra true false
            {
                if (n % i == 0) // neu n chia het cho i thi return false
                {
                    return false;
                }
            }
        }
        return true;
    }
}
// ham in ra so nguyen to
void inrasnt(int a[], int n)
{
    for (int i = 0; i <= n ; i++) // tao vong lap tu 0 den n in ra cac so nguyen to
    {
        if (snt(a[i]) == true) // truyen a[i] vao ham kiem tra de kiem tra phai snt hay khong, neu dung thi in ra
        {
            cout << " " << a[i];
        }
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

    // cau b
    cout << "so nguyen to:";
    inrasnt(a, n);
}
