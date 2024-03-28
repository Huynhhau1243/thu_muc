#include <iostream>

using namespace std;

// thuat toan Euclid
int UCLNab (int a, int b) // ham tin UCLN(a, b)
{
    while (a != b) // tao vong lap voi dieu kien lap la a khac b
    {
        if (a > b) // neu thoa thi a = a - b va tiep tuc vong lap
        {
            a = a - b;
        }
        else // neu thoa thi b = b - a va tiep tuc vong lap
        {
            b = b - a;
        }
    }
    return a; // tra ve a la UCLN(a, b)
}

int UCLNac (int a, int c) // ham tin UCLN(a, c)
{
    while (a != c) // tao vong lap voi dieu kien lap la a khac c
    {
        if (a > c) // neu thoa thi a = a - c va tiep tuc vong lap
        {
            a = a - c;
        }
        else // neu thoa thi c = c - a va tiep tuc vong lap
        {
            c = c - a;
        }
    }
    return a; // tra ve a la UCLN(a, c)
}

int main()
{
    int a;
    cout << "nhap a = ";
    cin >> a;
    int b;
    cout << "nhap b = ";
    cin >> b;
    int c;
    cout << "nhap c = ";
    cin >> c;

    // cout << UCLNab(a,b) << " " << UCLNac << endl;
    int BCNNac = a * c / UCLNac(a,c); // tim BCNN(a, c) bang cong thuc trong thuat toan Euclid
    cout << "UCLN(a, b) + BCNN(a, c) = " << UCLNab(a,b) + BCNNac;
}