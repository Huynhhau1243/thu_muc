#include <iostream>

int main(){
    std::cout <<"--------------------------------------------" << "\n";
    std::cout <<"|                                          |" << "\n";
    std::cout <<"|      cHAO MUNG BAN DEN VOI TRO CHOI      |" << "\n";
    std::cout <<"|               KEO, BUA , BAO             | " << "\n";
    std::cout <<"|                                          |" << "\n";
    std::cout <<"--------------------------------------------" << "\n";

    
        char a;
        std::cout << "nguoi choi a: ";
        std::cin >> a;

        char b;
        std::cout << "nguoi choi b: ";
        std::cin >> b;

        if (a == 'B' && b == 'K' || a == 'K' && b == 'O' || a == 'O' && b == 'B')
        {
            std::cout << "a thang";
        }
        else if (a == b)
        {
            std::cout << "hoa";
        }
        else
        {
            std::cout << "b thang";
        }
    
}