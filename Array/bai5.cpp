#include <iostream>

int ToHop(int k, int n)
{
    if (k == n || k == 0)
    {
        return 1;
    }
    return ToHop(k, n - 1) + ToHop(k - 1, n - 1);
}
int main()
{
    int k, n;
    char Tieptuc;
    do
    {
        std::cout << "Moi ban nhap k = ";
        std::cin >> k;

        std::cout << "Moi ban nhap n = ";
        std::cin >> n;
        if (k >= n)
        {
            do
            {
                std::cout << "Moi ban nhap lai k, k < n"
                          << "\n";
                std::cout << "Moi ban nhap k = ";
                std::cin >> k;

                std::cout << "Moi ban nhap n = ";
                std::cin >> n;
            } while (k >= n);
        }
        std::cout << "\n To hop C(" << k << "," << n << ") = " << ToHop(k, n) << "\n";
        std::cout << "Ban co muon tiep tuc khong: Y/n: ";
        std::cin >> Tieptuc;
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
    
    return 0;
}