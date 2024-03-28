#include <iostream>

using namespace std;

// cau d
// ham loai bo trung lap
void loaitrunglap(int a[], int n)
{
    for (int x = 0; x <= n; x++) // vong lap ngoai de duyet a[x]
    {
        for (int y = x + 1; y <= n; y++) // vong lap trong a[y]
        {
            if (a[x] == a[y]) 
            {
                for (int z = y; z <= n; z++) // neu a[x] = a[y] thi vong lap se bat dau tu z luc nay la y de ghi de phan tu trung len vi tri z do
                {
                    // vd 2 3 3 4 __ a[1] = 3 va a[2] = 3 trung lap => z = y = 1 va z = y + 1 = 2
                    a[z] = a[z + 1]; // => a[1] = a[2] = 3;
                }
                n--; // giam so luong phan tu cua mang di 1 don vi sau khi loai bo trung lap
                y--; // vong lap long ben trong van duyet qua cung 1 vi tri trong truong hop co phan tu trung lap
            }
        }
        cout << " " << a[x];
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

    // cau d
    int u = 0;
    for (int i = 0; i <= n; i++) // tao 2 vong lap i va j de kiem tra xem co trung lap khong
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j]) // neu co thi bien tam u tang len 1 
            {
                u++;
            }
        }
    }
    if (u > 0) // neu u > 0 thi tien hanh loai bo trung lap
    {
        cout << "mang co trung lap => loai bo trung lap:";
        loaitrunglap(a, n);
    }
    else // neu u = 0 thi ko co trung lap
    {
        cout << "mang ko co trung lap";
    }
}
