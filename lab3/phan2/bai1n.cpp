#include <iostream>

using namespace std;

// cau n
// ham kiem tra doi xung
bool kiemtradx(int a[], int n)
{
    if (n <= 1) // so so luong so trong mang nho hon 1 thi false
    {
        return false;
    }
    if (n % 2 != 0) // neu n la so le thi so luong cac phan tu trong mang la so chan (vi mang chay tu 0 den n)
    {
        for (int i = n / 2; i >= 0; i--) // tao vong lap i nua dau mang tu n / 2 lui ve lai 0
        // vd: n = 5 => n / 2 = 2 thi se lay a[1] a[1] a[2] (ko co so chinh giua)
        {
            for (int j = n / 2 + 1; j <= n; j++) // tao vong lap j nua sau mang tu n / 2 + 1 den n
            // vd: n = 5 => n / 2 + 1 = 3 thi se lay a[3] a[4] a[5] (ko co so chinh giua)
            {
                if (a[i] == a[j]) // nau a[i] = a[j] thi return true
                {
                    return true;
                }
            }
            return false; // con lai return false
        }
    }
    else // neu n la so chan thi so luong cac phan tu trong mang la so le (vi mang chay tu 0 den n)
    {
        for (int i = n / 2 - 1; i >= 0; i--) // tao vong lap i nua dau mang tu n / 2 - 1 lui ve lai 0
        // vd: n = 4 => n / 2 - 1 = 1 thi se lay ra cac so a[0] va a[1] (so chinh giua luc nay la a[2])
        {
            for (int j = n / 2 + 1; j <= n; j++) // tao vong lap j nua sau mang tu n / 2 + 1 den n
            // vd: n = 4 => n / 2 + 1 = 3 thi se lay ra cac so a[3] va a[4] (so chinh giua luc nay la a[2])
            {
                
                if (a[i] == a[j]) // neu a[i] = a[j] thi return true
                {
                    return true;
                }
            }
            return false; // con lai return false
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

    // cau n
    if (kiemtradx(a, n) == true)
    {
        cout << "mang doi xung";
    }
    else
    {
        cout << "mang ko doi xung";
    }
}
