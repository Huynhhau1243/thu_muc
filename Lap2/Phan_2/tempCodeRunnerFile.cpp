
#include <iostream>

using namespace std;

int main()
{
    double n;
    cout << "nhap so tien: ";
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;

    while (n != 0)
    {
        if (n >= 500)
        {
            n = n - 500;
            a++;
        }
        else if (n >= 200 && n <= 500)
        {
            n = n - 200;
            b++;
        }
        else if (n >= 100)
        {
            n = n - 100;
            c++;
        }
        else if (n >= 50)
        {
            n = n - 50;
            d++;
        }
        else if (n >= 20)
        {
            n = n - 20;
            e++;
        }
        else if (n >= 10)
        {
            n = n - 10;
            f++;
        }
        else if (n >= 5)
        {
            n = n - 5;
            g++;
        }
        else if (n >= 2)
        {
            n = n - 2;
            h++;
        }
        else
        {
            n = n - 1;
            i++;
        }
    }
    std::cout << a << " to 500k" << endl;
    std::cout << b << " to 200k" << endl;
    std::cout << c << " to 100K" << endl;
    std::cout << d << " to 50k" << endl;
    std::cout << e << " to 20k" << endl;
    std::cout << f << " to 10k" << endl;
    std::cout << g << " to 5k" << endl;
    std::cout << h << " to 2k" << endl;
    std::cout << i << " to 1k";
}
