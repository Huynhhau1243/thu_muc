#include <iostream>
int a[100][100];
int n;
void NhapMaTran(int x[100][100], int &n)
{
    do
    {
        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n >= 10);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "a[" << i << "]" << "[" << j << "] => ";
            std::cin >> a[i][j];
        }
    }
}

void XuatMaTran(int x[100][100], int &n)
{
    std::cout << "--Ta cp mang hai chieu-- \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << a[i][j] << ", ";
        }
        std::cout << "\n";
    }
}
int gia_tri_lon_nhat(int x[100][100], int &n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
                if (max < a[i][j]){
                    max = a[i][j];
                }
        }
    }
    std::cout << max;
}
int main()
{
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    std::cout << "\n";
    gia_tri_lon_nhat(a, n);
}