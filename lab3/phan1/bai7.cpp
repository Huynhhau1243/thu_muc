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
        else // neu thoa thi a = a - b va tiep tuc vong lap
        {
            b = b - a;
        }
    }
    return a; // tra ve a la UCLN(a, b)
}

int UCLNbc (int b, int c) // ham tin UCLN(b, c)
{
    while (b != c) // tao vong lap voi dieu kien lap la b khac c
    {
        if (b > c)
        {
            b = b - c; // neu thoa thi b = b - c va tiep tuc vong lap
        }
        else // neu thoa thi c = c - b va tiep tuc vong lap
        {
            c = c - b;
        }
    }
    return b; // tra ve a la UCLN(b, c)
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
    
    cout << "UCLN(a, b) + UCLN(b, c) + UCLN(a, c) = " << UCLNab(a, b) + UCLNbc(b, c) + UCLNac(a, c);
}
