 #include <iostream>

 int main(){
    int n;
    std::cout << "Nhap so nguyen n = ";
    std::cin >> n;
    int donvi, chuc, tram, nghin, chucnghin, tramnghin, trieu ;
    while (n > 0)
    {
         donvi = n % 10;
         chuc = n / 10 % 10;
         tram = n / 100 % 10;
         nghin = n / 1000 % 10;
         chucnghin = n / 10000 % 10;
         tramnghin = n / 100000 % 10;
         trieu = n / 1000000 % 10;
         std::cout << (donvi * 1000000) + (chuc * 100000) + (tram * 10000) + (nghin * 1000) + (chucnghin * 100) + (tramnghin * 10) + trieu;
         break;
    }
  }