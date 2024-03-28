#include <iostream>
#include <string>

using namespace std;

// chuoi string
string chuyendoi(int n, int heso) // ham de chuyen tu he 10 sang he 2 hoac 16
{
    string chuoi = ""; // khai bao chuoi

    while (n != 0) // tao vong lap voi dieu kien lap la n khac 0
    {
        int x = n % heso; // lay n chia lay du cho he so da nhap va luu vao x
        char kitu; // kitu char

        // chuyen doi so du thanh ki tu
        if (x < 10) // neu so du < 10 thi gia tri ASCII cua ki tu '0' se cong voi so du x cho ra ki tu la so
        {
            kitu = '0' + x; 
        }
        else // neu so du >= 10 thi gia tri ASCII cua ki tu 'A' se cong voi so du x cho ra ki tu la chu cai 
        {
            kitu = 'A' + (x - 10);
        }

        chuoi = kitu + chuoi; // them ki tu vao chuoi ket qua
        n = n / heso; // chia cho he so de tiep tuc vong lap
    }
    return chuoi;
}

int main()
{
    int n;
    cout << "nhap so he thap phan n = ";
    cin >> n;

    int heso;
    cout << "nhap he so dau ra: ";
    cin >> heso;

    cout << chuyendoi(n, heso);
}