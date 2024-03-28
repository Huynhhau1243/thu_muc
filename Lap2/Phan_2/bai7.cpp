#include <iostream>

int Nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Nhap vao phan tu a[" << i << "] : ";
        std::cin >> a[i];
        do
        {
            if (a[i] > 9999){
                std::cout << "Nhap lai vao phan tu a[" << i << "] (ban da nhap qua 9999): ";
                std::cin >> a[i];
            }
        } while (a[i] > 9999);
        
    }

    
}
int Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "; ";
    }
}
int tinhTBC(int a[], int n)
{
    float dem = 0;
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        dem ++;
        tong += a[i]; // nice
    }
    float tbc = tong/dem;
    std::cout << "Trung binh cong cua day so la = " << tbc ;
}

int main(){
    int *a, n;
    std::cout << "Nhap  do dai mang n = ";
    std::cin >> n;
    a = new int[n];
    std::cout << "day so co do dai la = " << Nhap(a, n) << "\n";
    std::cout << "day so vua nhap co do dai la: " << Xuat(a, n) << "\n";
    tinhTBC(a, n);
}