#include <iostream>

using namespace std;

// cau h
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
// ham in ra cac so khong phai so nguyen to
void inrakpsnt(int a[], int n)
{
    
    for (int i = 0; i <= n ; i ++) // tao vong lap de in ra
    {
        if (snt(a[i]) == false) // truyen a[i] vao ham de kiem tra phai snt hay khong, neu khong thi in ra
        {
            cout << a[i] << " ";
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

    // cau h
    cout << "ko phai so nguyen to: ";
    inrakpsnt(a, n);
}
