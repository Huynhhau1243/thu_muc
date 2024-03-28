#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Nhap tao do diem A
    float xA;
    cout << "xA = ";
    cin >> xA;
    float yA;
    cout << "yA = ";
    cin >> yA;
    float zA;
    cout << "zA = ";
    cin >> zA;

    // Nhap he so a, b, c, d cua mat phang
    float a;
    cout << "a = ";
    cin >> a;
    float b;
    cout << "b = ";
    cin >> b;
    float c;
    cout << "c = ";
    cin >> c;
    float d;
    cout << "d = ";
    cin >> d;

    // Tinh va xuat ra khoang canh tu diem den mat phang
    cout << "Khoangcanh = " << abs(a * xA + b * yA + c * zA + d) / sqrt(a * a + b * b + c * c);

}