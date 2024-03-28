#include <iostream>
#include <cmath>
//vd 1
void tong(int n){
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong = tong + i;
    }
    std::cout << "Tong = " << tong << "\n";
}

// vd2
void tongsole(int n2){
    int tong = 0;
    for (int i = 1; i <= n2 ; i += 2){
        tong += i;
    }
    std::cout << "Tong so le = " << tong << "\n";
}

//vd 3
void giaithua(int n3){
    int tich = 1;
    for (int i = 1; i <= n3; i++)
    {
        tich *= i;
    }
    std::cout << "n! = " << tich << "\n";
}

// vd 4:
void phanso(float n4){
    float tong = 0;
    for (float i = 2; i <= n4; i++){
        tong = tong + (1/ i * (i + 1));
    }
    std::cout << "Tong phan so gia thua = " << tong;
}
int main(){
    int n;
    std::cout << "Nhap so nguyen n: ";
    std::cin >> n;
    int n2;
    std::cout << "Nhap so nguyen n2: ";
    std::cin >> n2;
    int n3;
    std::cout << "Nhap so nguyen n3: ";
    std::cin >> n3;
    float n4;
    std::cout << "Nhap so nguyen n4: ";
    std::cin >> n4;
    
    tong(n);
    tongsole(n2);
    giaithua(n3);
    phanso(n4);

} 