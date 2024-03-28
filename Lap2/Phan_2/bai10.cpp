#include  <iostream>

int UCLN(int m, int n){
        while (m != n)
        {
            if (m > n)
                m = m - n;
            else
                n = n - m;
        }
}
int BCNN (int m, int n){
    int result = UCLN(m, n);
    int tb = m * n / result;
}
int main(){
    int m; 
    std::cout << "Nhap m = " ;
    std::cin >> m;

    int n;
    std::cout << "Nhap n = " ;
    std::cin >> n ;

    int result = UCLN(m, n);
    std::cout << "UCLN : " <<  result << "\n";

    result = BCNN(m, n);
    std::cout << "BCNN : " << result << "\n";
    system("pause");
}