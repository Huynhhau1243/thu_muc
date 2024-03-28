#include<iostream>

//      a. Nhập/xuất mảng A.
int a[100][100];
int m, n;
void NhapMaTran(int x[100][100], int &m, int &n){
    do
    {
        std::cout << "Nhap m = ";
        std::cin >> m;

        std::cout << "Nhap n = ";
        std::cin >> n;
    } while (n >= 10 || m >= 10);
    for (int i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            std::cout << "a[" << i <<"]" << "[" << j << "] => ";
            std::cin >> a[i][j];
        }
        
    }
    
}

void XuatMaTran(int x[100][100], int &m, int &n)
{
    std::cout << "Ta cp mang hai chieu: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << a[i][j] << ", ";
        }
        
    }
    
}

//     b. Có bao nhiêu phần từ số âm trong mảng.
int kiem_tra_so_am(int x[100][100], int &m, int &n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0){
                dem++;
            }
        }
    }
    std::cout << "so phan tu am trong mang la = " << dem << "\n";
}

int gia_tri_lon_nhat(int x[100][100], int &m, int &n){
    int max = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
            
        }
    }
    std::cout << "Phan tu lon nhat trong mang la = "  << max << "\n";
}

//      e. Sắp xếp từng dòng của A theo thứ tự tăng dần

int sap_xep_tang(int x[100][100], int &m , int &n){
    int k = m * n; // tổng số lượng phần tử trong mảng
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            // muốn biết đang ở dòng nào lấy i / n; n la số lượng cột
            if (x[i / n][i % n] > x[j/n][j % n])
            {
                int tam = x[i / n][i % n];
                x[i / n][i % n] = x[j / n][j % n];
                x[j / n][j % n] = tam;
            }
        }
    }
}

int sap_xep_giam(int x[100][100], int &m, int &n)
{
    int k = m * n; // tổng số lượng phần tử trong mảng
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            // muốn biết đang ở dòng nào lấy i / n; n la số lượng cột
            if (x[i / n][i % n] < x[j / n][j % n])
            {
                int tam = x[i / n][i % n];
                x[i / n][i % n] = x[j / n][j % n];
                x[j / n][j % n] = tam;
            }
        }
    }
}
int main(){
    NhapMaTran(a, m, n);
    XuatMaTran(a, m ,n);

    kiem_tra_so_am(a, m, n);
    gia_tri_lon_nhat(a, m ,n);

    std::cout << "---Sap xep mang theo tang dan ---\n";
    sap_xep_tang(a, m , n);
    XuatMaTran(a, m, n);
    std::cout << "\n";

    std::cout << "---Sap xep mang theo giam dan---\n";
    sap_xep_giam(a, m, n);
    XuatMaTran(a, m ,n);
}