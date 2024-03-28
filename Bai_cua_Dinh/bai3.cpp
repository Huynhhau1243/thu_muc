#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string a;
    cout << "Nguoi choi a ra ";
    cin >> a;

    string b;
    cout << "Nguoi choi b ra ";
    cin >> b;

    if (a != "K"  &&  a != "B" && a != "O")
    {
        cout << "nhap sai";
        return 1;
    }
    else if (b != "K" && b != "B" && b != "O")
    {
        cout << "nhap sai";
        return 1;
    }
    else if (a == b)
    {
        cout << "hoa";
    }
    else if (a == "K" && b == "B" || a == "O" && b == "K" || a == "B" && b == "O" )
    {
        cout << "b thang";
    }
    else 
    {
        cout << "a thang";
    }

}