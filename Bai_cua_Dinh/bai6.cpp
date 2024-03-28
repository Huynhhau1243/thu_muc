#include <iostream>

using namespace std;

int main ()
{
    int nam;
    int ngay;
    int thang;
    cin>>thang;
    int quy = (thang - 1) / 3 +1;
    cout << "quy = " << quy;
    bool FLANAMNHUAN;
    switch (thang)
    {
        case1:
        case3:
        case5:
        case7:
        case8:
        case10:
        case12:
           ngay = 31;
           break;

        case2:
        {
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 100 == 0))
              ngay = 29;
            else 
              ngay = 28;
        }
    }
    int ngaytiep;
    int thangtiep;
    int namtiep;
    ngaytiep = ngay + 1;
    thangtiep = thang;
    namtiep = nam;

    if (ngaytiep > ngay)
    {
        ngaytiep = 1;
        thangtiep ++;
        if ()
    }
}