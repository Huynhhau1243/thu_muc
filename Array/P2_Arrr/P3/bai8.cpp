// f.Tìm các số xuất hiện nhiều nhất trong ma trận.
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

int dem_xuathien_nhieu_nhat_trong_arr(int x[100][100], int &n, int x){
    int tam_thoi = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (a[i][j] == x){
                tam_thoi ++;
            }
        }
    }
    return tam_thoi;
}

int tim_gia_tri_xh_nhieu(int x[100][100], int &n){
    int tam_thoi_1, tam_thoi= dem_xuathien_nhieu_nhat_trong_arr(a, n, a[0][0], index1 = 0, index2 = 0){

    }
}
int main()
{
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    PT_xuathien_nhieu_nhat_trong_arr(a, n);
}