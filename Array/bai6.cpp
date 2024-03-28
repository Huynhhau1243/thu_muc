#include<iostream>

int chanletong(int m, int n){
    int fn , f0 = 0, f1 = 1;
    int fm , f2 = 0, f3 = 1;
    int tong_1 = 0;
    int tong_2 = 0;
    int tongcacsochan = 0;
    if (n < 0 ||  m < 0){
        std::cout << "Ban da nhap sai so! \n";
    }
    else {
        if (n == 0){
            std::cout << "n = 0 \n";
            if (m == 0){
                std::cout << "m = 0 \n";
            } 
        }
            if (n == 1){
                std::cout << "n = 1 \n";
                if ( m == 1){
                    std::cout << "m = 1 \n";
                }
            }
        }
        if (n >= 2){
            for (int i = 2; i <= n; i++)
            {
               fn = f0 + f1;
               f0 = f1;
               f1 = fn;
               if (fn % 2 == 0){
                tong_1 = tong_1  + fn;
                    std::cout << "Fn chan = " << tong_1 << "\n";
               }
            }
            std::cout <<"Fn = " << fn << "\n";
            if (m >= 2){
                for (int j = 2; j <= n; j++)
                {
                    fm = f2 + f3;
                    f2 = f3;
                    f3 = fm;
                    if (fm % 2 == 0)
                    {
                        tong_2 = tong_2 + fm;
                        std::cout << "Fm chan = " << tong_2 << "\n";
                    }
                }
                std::cout << "Fm = "<< fm << "\n";
            }
        }
        tongcacsochan = tong_1 + tong_2;
        std::cout << "Tong so chan trong Fibonacci = " << tongcacsochan << "\n";
}
int main(){
    int n,m;
    std::cout << "Nhap so Fibonacci thu 1: ";
    std::cin >> n;

    std::cout << "Nhap vao so Fibonacci thu 2: ";
    std::cin >> m;
    chanletong(m, n);
}