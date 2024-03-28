#include <iostream>
int a[100][100];
int  n;
void NhapMaTran(int x[100][100],int &n)
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
    std::cout << "Ta cp mang hai chieu: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << a[i][j] << ", ";
        }
    }
}

int tong_cheo_chinh(int x[100][100], int &n){
   int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i == j){
            sum+= a[i][j];
           }
           
        }
        
    }
    return sum;
}
int main(){
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    std::cout << "\n";
    std::cout << "Tong duong cheo chinh = " << tong_cheo_chinh(a, n);
}