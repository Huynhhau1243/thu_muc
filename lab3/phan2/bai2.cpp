#include <iostream>

using namespace std;

// ham hoan doi gia tri x y
void hoandoi(int &x, int &y)
{
    int bientam = x;
    x = y;
    y = bientam;
}
// ham sap xep mang tron theo huong tang dan
void trontangdan(int arr[], int m, int n)
{
    int mn = m + n + 1; // mn la so luong phan tu trong mang arr tinh tu 0
    for (int i = 0; i <= mn; i++) // tao vong lap i tu 0 den mn
    {
        for (int j = i + 1; j <= mn; j++) // tao vong lap j tu i + 1 den mn
        {
            if (arr[i] > arr[j]) // neu a[i] > a[j] thi hoandoi
            {
                hoandoi(arr[i], arr[j]);
            }
        }
        cout << arr[i] << " "; // in ra mang arr da sap xep tang dan
    }
}
int main()
{
    int n; 
    cout << "nhap do dai mang a: ";
    cin >> n;

    int m;
    cout << "nhap do dai mang b: ";
    cin >> m;

    int *a; // con tro
    a = new int(n);
    // int mang = a[];

    int *b; // con tro
    b = new int(m);
    // int mang = b[];

    for (int i = 0; i <= n; i++) // tao vong lap de nhap mang a
    {
        cout << "a[" << i << "]";
        cin >> a[i];
    }
    for (int i = 0; i <= m; i++) // tao vong lap de nhap mang b
    {
        cout << "b[" << i << "]";
        cin >> b[i];
    }

    cout << "---mang a da nhap---" << endl;
    for (int i = 0; i <= n; i++) // tao vong lap de xuat mang a
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
    cout << "---mang b da nhap---" << endl;
    for (int i = 0; i <= m; i++) // tao vong lap de xuat mang b
    {
        cout << "b[" << i << "] = " << b[i] << "\n";
    }
    
    // tron 2 mang vao nhau
    int arr[m + n + 2]; // khai bao do dai mang tron m + n + 2 (vi mang a b bat dau tu 0 nen + 2 moi du)
    int x = 0; // bien tam de luu so luong phan tu trong mang moi

    for (int i = 0; i <= n; i++) // vong lap de cho mang a vao mang arr
    {
        arr[x] = a[i];
        x++;
    }
    for (int i = 0; i <= m; i++) // vong lap de cho mang b vao mang arr
    {
        arr[x] = b[i];
        x++;
    }
    cout << "=> mang sau khi tron: " << endl;
    for (int i = 0; i < x; i++) // vong lap de in ra mang arr 
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    cout << "=> mang tron da duoc sap xep tang dan: ";
    trontangdan(arr, m, n);
}