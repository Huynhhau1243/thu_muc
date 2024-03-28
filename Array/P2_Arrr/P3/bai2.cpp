// Trộn 2 mảng tăng dần thành 1 mảng cũng tăng dần.

#include <iostream>

int Nhap_arr_A(int a[], int n){
    for (int i = 0; i <= n; i++)
    {
        std::cout << "A[" << i << "] => ";
        std::cin >> a[i];
    }
}

int Nhap_arr_B(int b[], int m){
    for (int i = 0; i <= m; i++)
    {
        std::cout << "B[" << i << "] => ";
        std::cin >> b[i];
    }
}

int Xuat_arr_A(int a[], int n)
{
    std::cout << "Mang A = ";
    for (int i = 0; i <= n; i++)
    {
        std::cout << a[i] << "; ";
    }
}

int Xuat_arr_B(int b[], int m){
    std::cout << "Mang B = ";
    for (int i = 0; i <= m; i++)
    {
        std::cout << b[i] << "; ";
    }
}

void doivitri(int &x, int &y){
    {
        int bientam = x;
        x = y;
        y = bientam;
    }
}
void trontangdan(int arr[], int m, int n)
{
    int mn = m + n + 1;           // mn la so luong phan tu trong mang arr tinh tu 0
    for (int i = 0; i <= mn; i++) // tao vong lap i tu 0 den mn
    {
        for (int j = i + 1; j <= mn; j++) // tao vong lap j tu i + 1 den mn
        {
            if (arr[i] > arr[j]) // neu a[i] > a[j] thi hoandoi
            {
                doivitri(arr[i], arr[j]);
            }
        }
        std::cout << arr[i] << " "; // in ra mang arr da sap xep tang dan
    }
}

int main(){
    int *a, n;
    a = new int(n);
    std::cout << "Nhap do dai mang A = ";
    std::cin >> n;

    int *b, m;
    b = new int(m);
    std::cout << "Nhap do dai mang b = ";
    std::cin >> m;

    Nhap_arr_A(a, n);
    Xuat_arr_A(a, n);
    std::cout << "\n";
    Nhap_arr_B(b, m);
    Xuat_arr_B(b , m);

    // tron 2 mang vao nhau
    int arr[m + n + 2]; // khai bao do dai mang tron m + n + 2 (vi mang a b bat dau tu 0 nen + 2 moi du)
    int x = 0;          // bien tam de luu so luong phan tu trong mang moi

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
    std::cout << "=> mang sau khi tron: " << "\n";
    for (int i = 0; i < x; i++) // vong lap de in ra mang arr
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
    std::cout << "=> mang tron da duoc sap xep tang dan: ";
    trontangdan(arr, m, n);
}