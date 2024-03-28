#include <iostream>
#include <cmath>
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

bool kiem_tra_so_nguyen_to(int &n){
    if (n < 2){
        return false;
    }
    else {
        if (n ==  2){
            return false;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0){
                return false;
            }
        }
        return true;
    }
}

int xet_so_nguyen_to(int x[100][100], int &n)
{
    int dem = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
           if (kiem_tra_so_nguyen_to(a[i][j]) == true){
                dem++;
           }
        }
    }
    std::cout << "so luong snt trong mang = " << dem;
}
int main()
{
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    std::cout << "\n";
    xet_so_nguyen_to(a, n);

}