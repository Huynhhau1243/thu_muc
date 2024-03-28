#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    const int tiengiodau = 30000;
    
    const double giamgia = 0.3;

    int giodau;
    cout << "gio dau = ";
    cin >> giodau;

    int gioketthuc;
    cout << "gio ket thuc = ";
    cin >> gioketthuc;
    
    int sogio;
    sogio = gioketthuc - giodau;

    int tien;

    if (sogio <= 3)
    {
        tien = sogio * tiengiodau;
    }
    else 
    {
        tien = 3*tiengiodau + ((sogio - 3)*(1 - giamgia));
    }

    cout << "Tien = " << tien;

