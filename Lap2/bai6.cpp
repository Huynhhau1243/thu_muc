#include <iostream>

void kiemtra(int ngay, int thang, int nam)
{
    if (ngay < 32)
    {
        std::cout << "Ngay hop le"
                  << "\n";
    }
    else
    {
        std::cout << "Ngay khong hop le"
                  << "\n";
    }

    if (thang < 12)
    {
        std::cout << "Thang hop le"
                  << "\n";
    }
    else
    {
        std::cout << "Thang khong hop le"
                  << "\n";
    }

    if (thang <= 3)
    {
        std::cout << thang << " thuoc quy 1"
                  << "\n";
    }
    else if (thang <= 6)
    {
        std::cout << thang << " thuoc quy 2"
                  << "\n";
    }
    else if (thang <= 9)
    {
        std::cout << thang << " thuoc quy 3"
                  << "\n";
    }
    else
    {
        if (thang <= 12)
        {
            std::cout << thang << " thuoc quy 4"
                      << "\n";
        }
    }

    if (thang == 1 || thang == 3 || thang == 5 || thang == 8 || thang == 10 || thang == 12)
    {
        std::cout << "Thang " << thang << " co 31 ngay"
                  << "\n";
    }
    else if (thang == 4 || thang == 9 || thang == 6 || thang == 11)
    {
        std::cout << "Thang " << thang << " co 30 ngay"
                  << "\n";
    }
    else
    {
        if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
        {
            std::cout << "thang 2 nam nhuan co 29 ngay"
                      << "\n";
        }
        else
        {
            std::cout << "thang 2 nam khong nhuan co 28 ngay"
                      << "\n";
        }
    }


    // ngay truoc va thang truoc

    if (thang == 1 || thang == 3 || thang == 5 || thang == 8 || thang == 10 || thang == 12)
    {
        if (thang == 1)
        {
            std::cout << "Thang hom truoc la: 12"
                      << "\n";
        }
        else
        {
            std::cout << "Thang hom truoc la: " << thang - 1 << "\n";
        }
        std::cout << "Ngay hom truoc cua thang la: " << ngay - 1 << "\n";
    }

    if (thang == 4 || thang == 9 || thang == 6 || thang == 11)
    {
        std::cout << "Thang hom truoc la thang: " << thang - 1 << "\n";
        std::cout << "Ngay hom truoc cua thang la: " << ngay - 1 << "\n";
    }

    if(thang == 2){
        if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0)){
            std::cout << "Thang hom truoc la thang: " << thang - 1 <<"\n";
            std::cout << "Ngay hom truoc cua thang la: " << 29 - 1 << "\n";
        }
        else {
            std::cout << "Thang hom truoc la thang: " << thang - 1 << "\n";
            std::cout << "Ngay hom truoc cua thang la: " << 28 - 1 << "\n";
        }
    }

    // ngay sau va thang sau:

    if (thang == 1 || thang == 3 || thang == 5 || thang == 8 || thang == 10 || thang == 12){
        if (thang == 12)
        {
            std::cout << "Thang hom sau la: 1" << "\n";
            std::cout << "Ngay hom sau la ngay: " << ngay + 1 << "\n";
            if ( ngay == 31){
                std::cout << "Ngay hom sau la ngay: 1" << "\n";
            }
        }
        else
        {
            if (thang <= 12){
                std::cout << "Thang hom sau la: " << thang + 1 << "\n";
            }
        }
        if (ngay == 31){        
            std::cout << "Ngay hom sau cua thang la: " << 31 - 30 << "\n";
        }
        else {
            std::cout << "Ngay hom sau cua thang la: " << ngay + 1 << "\n";
        }
    }
}
    

int main()
{
    int ngay;
    std::cout << "Nhap ngay vao = ";
    std::cin >> ngay;

    int thang;
    std::cout << "Nhap thang vao = ";
    std::cin >> thang;

    int nam;
    std::cout << "Nhap nam vao = ";
    std::cin >> nam;
    kiemtra(ngay, thang, nam);
}