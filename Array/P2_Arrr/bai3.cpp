#include <iostream>

int Nhap_mang_A(int c[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        std::cout << "a[" << i << "]";
        std::cin >> c[i];
    }
}

int Xuat_mang_ra_ngoai(int c[], int n)
{
    std::cout << "Ta co mang = ";
    for (int i = 0; i <= n; i++)
    {
        std::cout << c[i] << "; ";
    }
}

bool kiem_tra_doi_xung(int c[], int n){
    for (int i = 0; i <= n; i++)
    {
        if (c[i] == c[n  - i - 1])
        {
            return true;
            break;
        }
    }
    return false;
}

int xu_ly_doi_xung(int c[], int n){
        if (kiem_tra_doi_xung(c, n) == true)
        {
            std::cout << "Mang doi xung";
        }
        else
        {
            std::cout << "Mang kh doi xung";
        }
}
int main()
{
    int *c, n;
    c = new int(n);
    std::cout << "Nhap do dai mang = ";
    std::cin >> n;
    Nhap_mang_A(c, n);
    Xuat_mang_ra_ngoai(c, n);

    xu_ly_doi_xung(c, n);
}