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
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            std::cout << "a[" << i << "]" << "[" << j << "] => ";
            std::cin >> a[i][j];
        }
    }
}

void XuatMaTran(int x[100][100], int &n)
{
    std::cout << "--Ta cp mang hai chieu-- \n";
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            std::cout << a[i][j] << ", ";
        }
        std::cout << "\n";
    }
}
int so_am_trong_duong_cheo(int x[100][100], int &n)
{
     int dem = 0; // chéo phụ là bên phải
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i + j == n){
                if (a[i][j] < 0){
                    dem++;
                }
            }
        }
        
    }
    std::cout << "So am trong mang = " << dem;
}
int main()
{
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    std::cout << "\n";
    so_am_trong_duong_cheo(a, n);

}