#include <iostream>

using namespace std;

// cau e
// ham so sanh so luong so chan va le
void chanle(int a[], int n)
{
    int m = 0; // bien tam de dem so chan
    int k = 0; // bien tam de dem so le
    for (int i = 0; i <= n; i++) // tao vong lap de dem so chan
    {
        if (a[i] % 2 == 0) // neu dung thi so luong so chan la m tang len 1
        {
            m++;
        }
        else // neu dung ko dung cai if o tren thi so luong so le la k tang len 1
        {
            k++;
        }
    }
    if (m > k) // neu m lon hon k thi so chan nhieu hon
    {
        cout << "so chan nhieu hon so le";
    }
    else if (m < k) // neu m nho hon k thi so chan it hon so le
    {
        cout << "so chan it hon so le";
    }
    else // neu 2 cai tren sai thi so chan bang so le
    {
        cout << "so chan bang so le";
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
    
    // cau e
    chanle(a, n);
}
