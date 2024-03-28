#include <iostream>

int Nhap_mang_vao(int b[], int z){
    for (int i = 0; i < z; i++)
    {
        std::cout << "a[" << i << "] => ";
        std::cin >> b[i];
    }
}

int Xuat_mang_ra(int b[], int z){
    std::cout << "Mang = ";
    for (int i = 0; i < z; i++)
    {
        std::cout <<  b[i] << "; ";
    }
}

// m. Chèn số x vào mảng giảm dần sao cho mảng vẫn giảm dần sau khi chèn x


int chen_x_giam_dan(int b[], int &z, int x, int vitri)
    {
        int bien_tam;
        for (int i = 0; i < z; i++)
        {
            for (int j = i + 1; j < z; j++)
            {
                if (b[i] < b[j])
                {
                    bien_tam = b[i];
                    b[i] = b[j];
                    b[j] = bien_tam;
                    for (int i = z - 1; i >= vitri; i--) // n - 1 là thằng cuối cùng dịch đi trước
                    // i-- nó sẽ dịch xét từ n-1 tới về sau
                    {
                        b[i + 1] = b[i]; // a[i] = 4 thì a[i + 1] sẽ là 5 chúng ta sẽ gán từ phải qua trái tức là a[i] = a[i + 1] ;
                        // sau khi thêm nó sẽ nằm ở a[i];
                    }
                    b[vitri] = x; // thêm vị trí x vào bất kì trong mảng
                    z++;        // sau k
                }
            }
        }
    }
    int main()
    {
        int *b, z;
        b = new int(z);

        std::cout << "Nhap do dai mang = ";
        std::cin >> z;
        Nhap_mang_vao(b, z);
        Xuat_mang_ra(b, z);
        int x;
            std::cout << "Nhap phan tu can them = ";
            std::cin >> x;

            int vitri;
            do
            {
                std::cout << "Nhap vi tri can them = ";
                std::cin >> vitri;
                if (vitri < 0 || vitri > z){
                    std::cout << "\n vi tri can them trong doan tu [0, " << z << "]";
                }
            } while (vitri < 0 || vitri > z);
            chen_x_giam_dan(b , z, x, vitri);
            Xuat_mang_ra(b, z);
    }