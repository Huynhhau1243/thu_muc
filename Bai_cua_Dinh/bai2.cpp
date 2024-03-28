#include <iostream>

using namespace std;

int main ()
{
    int a;
    cout << "Nhap a = ";
    cin >> a;

    int b;
    cout << "Nhap b = ";
    cin >> b;

    if (a > b)
    {
        cout << "a lon hon b";
    }
    else if (a < b)
    {
        cout << "b lon hon a";
    }
    else 
    {
        cout << "a va b bang nhau";
    }
}