#include <iostream>

using namespace std;

int demso(int n) // ham dem so luong cac so trong day so 
{
    int x = 0; // bien tam de dem so luong
    while (n != 0) // tao vong lap voi dieu kien dung la n khac 0
    {
        n = n / 10;
        x = x + 1; // bien tam tang len mot de dem so luong chu so
    }
    return x; // tra ve gia tri x la so luong chu so trong day
}

int main()
{
    int n;
    cout << "nhap so nguyen: ";
    cin >> n;

    cout << "so luong chu so trong day so da nhap: " << demso(n);
}