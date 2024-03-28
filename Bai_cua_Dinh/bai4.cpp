#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    const double Luongcoban = 650000;
    
    double Luong;

    double Heso;

    int Thamnien;
    cout << "Thamnien = ";
    cin >> Thamnien;

    if (Thamnien < 12)
    {
        Heso = 1.92;
    }
    else if (Thamnien < 36)
    {
        Heso = 2.34;
    }
    else if (Thamnien  < 60)
    {
        Heso = 3;
    }
    else
    {
        Heso = 4.5;
    }

    Luong = Heso * Luongcoban;
    cout << "Luong = " << Luong;
}