#include <iostream>

using namespace std;

int main()
{
    int ngay;
    cout << "ngay: ";
    cin >> ngay;

    int thang;
    cout << "thang: ";
    cin >> thang;

    int nam;
    cout << "nam: ";
    cin >> nam;

    if (ngay <= 31)
    {
        cout << "ngay hop le" << endl;
    }
    else
    {
        cout << "ngay ko hop le" << endl;
    }

    if (thang <= 12)
    {
        cout << "thang hop le" << endl;
    }
    else
    {
        cout << "thang ko hop le" << endl;
    }

    if (thang <= 3)
    {
        cout << "quy 1" << endl;
    }
    else if (thang <= 6)
    {
        cout << "quy 2" << endl;
    }
    else if (thang <= 9)
    {
        cout << "quy 3" << endl;
    }
    else
    {
        cout << "quy 4" << endl;
    }

    if (thang == 1 || thang == 3 || thang == 5 || thang == 8 || thang == 10 || thang == 12)
    {
        cout << thang << " thang nay co 31 ngay" << endl;
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        cout << thang << " thang nay co 30 ngay" << endl;
    }
    else
    {
        if ((nam % 4 == 0) && (nam % 100 != 0) || (nam % 400 == 0))
        {
            cout << "nam nhuan, thang 2 co 29 ngay" << endl;
        }
        else
        {
            cout << "nam ko nhuan, thang 2 co 28 ngay";
        }
    }

    if (ngay <= 31)
    {
        if (ngay == 31 || ngay == 30 || ngay == 28 || ngay == 29)
        {
            cout << "ngay hom sau la: " << 1 << endl;
            cout << "thang cua hom sau la: " << thang + 1 << endl;
        }
        else
        {
            cout << "ngay hom sau la: " << ngay + 1 << endl;
        }
    }

    if (ngay > 0 && ngay <= 31)
    {
        if (ngay == 1)
        {
            if (thang == 1 || thang == 3 || thang == 5 || thang == 8 || thang == 10 || thang == 12)
            {
                cout << "ngay hom truoc la: " << 31 << endl;
                cout << "thang cua truoc sau la: " << thang - 1 << endl;
            }
            else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            {
                cout << "ngay hom truoc la: " << 30 << endl;
                cout << "thang cua truoc sau la: " << thang - 1 << endl;
            }
                if (thang - 1 == 2){
                    if ((nam % 4 == 0) && (nam % 100 != 0) || (nam % 400 == 0))
                    {
                        cout << "ngay hom truoc la: " << 29 << endl;
                        cout << "thang cua truoc sau la: " << thang - 1 << endl;
                    }
                    else
                    {
                        cout << "ngay hom truoc la: " << 28 << endl;
                        cout << "thang cua hom truoc la: " << thang - 1 << endl;
                    }
                
            }
        }
        else
        {
            cout << "ngay hom truoc la: " << ngay - 1 << endl;
        }
    }
}
