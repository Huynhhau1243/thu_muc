// Chương trình cho phép nhập vào một số nguyên dương, là lượng điện tiêu thụ(kWh)
// trong tháng của nhà bạn.Chương trình tính và in số tiền nhà bạn phải trả cho tháng đó được tính theo giá định mức như bảng sau:

#include <iostream>

int main(){
    int luongtieuthu;
    std::cout << "Nhap luong tieu thu trong nha: ";
    std::cin >> luongtieuthu;
    float tien;
    if(luongtieuthu <= 100){
        tien = luongtieuthu * 500 * 0.1;
    }
    else if (luongtieuthu <= 150){}
    {
        tien = (550 * 100 * 0.1) + ((luongtieuthu - 100) * 900 * 0.1);
    }
    if (luongtieuthu >= 150 && luongtieuthu <= 200){
        tien = (550 * 100 * 0.1) + ((150 - 100) * 900 * 0.1) + ((luongtieuthu - 150) * 1250 * 0.1) ;
    }
    else if (luongtieuthu >= 200 && luongtieuthu <= 300){
        tien = (550 * 100 * 0.1) + ((150 - 100) * 900 * 0.1) + ((200 - 150) * 1250 * 0.1) + ((luongtieuthu - 200) * 1450 * 0.1);
    }
    else{
        if (luongtieuthu > 300){
            (550 * 100 * 0.1) + ((150 - 100) * 900 * 0.1) + ((200 - 150) * 1250 * 0.1) + ((300 - 200) * 1450 * 0.1) + ((luongtieuthu - 300) * 1700 * 0.1); 
        }
    }
    std::cout << "so tien phai tra la = " << tien;
}