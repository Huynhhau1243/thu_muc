#include <iostream>

void InraNhiPhan(int n){
    if (n == 0) { // nếu số chia = 0 thì chúng ta dừng lại
        return;
    }
    else{
        int r = n % 2; // chia lay du vd: 2 % 2 = 1 du 0 no se lay 0;
        InraNhiPhan(n/2); // vd 2/2 duoc 1 lay nguyen 1
        std::cout << r;
    }
}
int main(){
    int n; 
    do
    {
        std::cout << "Nhap vao so muon doi ra Nhi phan = ";
        std::cin >> n;
    } while (n < 0);
    InraNhiPhan(n);
    

}