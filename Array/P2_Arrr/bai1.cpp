#include <iostream>
#include <cmath>
int Nhaparr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << "a [" << i << "] = " ;
        std::cin >> a[i];
    }
    
}

int Xuatarr (int a[], int n){
    std::cout << "Ta co mang => " ;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << ", ";
    }
    
}

// 1.a  Kiểm tra xem mảng có phải chứa toàn số chẵn hay không?
bool chanle (int a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            return true; 
        }
        return false;
    }
}

// // b. Hiển thị các số nguyên tố có trong mảng ?

bool kiemtrasonguyento(int n){
    if (n < 2){
        return false;
    }
    else {
        if (n == 2){ // so 2 la so chan duy nhat la so nguyen to
            return true;
        }
        else {
            if (n % 2 == 0){
                return false;
            }
            else {
                for (int i = 2; i < n; i++)
                {
                    if (n % i == 0){
                        return false;
                    }
                }
                
            }
        }
        
    }
    return true;
}

void coutsonguyento(int a[], int n){

 // duyet tu dau mang den cuoi mang lay tung phan tu trong mang bo vao ham kiem tra so nguyen to;
    std::cout << " => So nguyen to trong mang = ";
    for (int i = 0; i < n; i++)
    {
        if (kiemtrasonguyento(a[i]) == true)
        {
            std::cout << a[i] << "; ";
        }
    }
    std::cout << "\n";
    std::cout << " => Khong phai la so nguyen to trong mang = ";
    for (int i = 0; i < n; i++)
    {
        if (kiemtrasonguyento(a[i]) == false)
        {
            std::cout << a[i] << "; ";
        }
    }
}

// . Mảng có đang được sắp xếp hay không? Nếu có thì mảng đã sắp tăng dần hay giảm dần?
bool mangtangdan (int n, int a[]){
    int num = 1;
    for (int i = 0; i <  n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            num = 0;
            break;
        }
    }
    return num;
}

bool manggiamdan (int n, int a[]){
    int num = 1;
    for (int i = 0; i <  n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            num = 0;
            break;
        }
    }
    return num;
}

// d. Cho biết mảng có các phần tử trùng nhau hay không? Nếu có, hãy loại bỏ bớt và chỉ để lại 1 phần tử.
// Hàm xử lý xóa các phần tử trùng nhau tại vị trí bất kì;

// + &n là sau khi xóa 1 giá trị trong mảng ta sẽ lưu giá trị đó lại trong n tham chiếu
void XoaBatKy(int a[], int &n, int vitri)
{
    for (int i = vitri + 1; i < n; i++)  
    {
        a[i - 1] = a[i]; // ví dụ a[3] sau khi xóa nó sẽ về vị trí a[2] để đứng
    }
    n --; // sau khi xóa xong a[i - 1] nó sẽ giảm nếu trừ vì vậy ta nên giảm độ dài mảng
}
void xoa_phan_tu_trung_nhau(int a[], int &n){ // xóa phần tử sl tham chiếu sẽ giảm đi có tham chiếu lưu n để nso giảm đi

    for (int i = 0; i < n - 1; i++) // n - 1 phần tử cuối cùng nó sẽ là số phân biệt kh duyet nữa
    {
        for (int j = i + 1; j < n ; j++)
        {
            if (a[i] == a[j]){
               XoaBatKy(a, n, j) ;// cần xóa vị trí thứ a[j] -> j
               i--;
            }   
        }
    }
}
//  

void demslchanle(int a[], int n){
    int demchan = 0;
    int demle = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0){
            demchan ++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            demle ++;
        }
        
    }
    std::cout << "So luong chan trong mang = "  << demchan << "\n"; 
    std::cout << "So luong le trong mang = "  << demle;
    std::cout << "\n";
    if (demchan > demle)
    {
        std::cout << "Chan lon hon le";
    }
    else if (demle > demchan){
        std::cout << "le lon hon chan";
    }
    else {
        std::cout << "Chan bang le";
    }
    
}
// f.Hãy chèn số có giá trị x vào vị trí có chỉ số p của mảng nếu mảng chưa đầy?

void themphantuvaovitribatki(int a[], int &n, int x, int vitri){
    // vòng lặp này làm công việc để dịch từng phầng tử từ thàng n - 1 về đến vitri
    for (int i = n - 1; i >= vitri; i--) // n - 1 là thằng cuối cùng dịch đi trước
    // i-- nó sẽ dịch xét từ n-1 tới về sau
    {
        a[i + 1] = a[i]; // a[i] = 4 thì a[i + 1] sẽ là 5 chúng ta sẽ gán từ phải qua trái tức là a[i] = a[i + 1] ;
        // sau khi thêm nó sẽ nằm ở a[i];
    }
    a[vitri] = x; // thêm vị trí x vào bất kì trong mảng
    n ++; // sau khi thêm nó sẽ tăng đọ dài 
}

// g. Hãy tìm số nguyên tố đầu tiên xuất hiện trong mảng mà phần tử đứng trước của nó là số chính phương?
bool kiem_tra_so_chinh_phuong(int n){
    int ketqua = (int)sqrt(n * 1.0);
    if (ketqua * ketqua == n) // nhân lại ra bình phương
    {
        return true; // là số chính phương
    }
    return false; // ko phải là số chính phương
}
void so_chinh_phuong(int a[], int n)
{
    // số chính phương khi căng ra thì nó sẽ là số nguyên
    std::cout << "So chinh phuong la = ";
    for (int i = 0; i <= n; i++)
    {
        if (kiem_tra_so_chinh_phuong(a[i]) == true)
        {
            std::cout << a[i] << " ";
        }
        else
        {
            std::cout << "Mang kh co so chinh phuong";
        }
    }
    std::cout << "\n";
}

// h. Tách các số không phải là số nguyên tố và đưa vào mảng khác.
bool kiem_tr_sn(int n){ // n = a[i]
    if (n < 2)
    {
        return false;
    }
    else
    {
        if (n == 2)
        {
            return false;
        }
        else 
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    return false;
                }
                
            }
        }
        
    }
    return true;
}

void in_ra_pt_la_snt(int a[], int &n)
{
    std::cout << "\n\n----Mang chua so nguyen to----\n";
    std::cout <<  "Mang new = ";
    for (int i = 0; i <= n; i++)
    {
        if (kiem_tr_sn(a[i]) == true){
            std::cout << a[i] << "; ";
        }
    }

    std::cout << "\n\n----Mang chua so khong phai so nguyen to----\n";
    std::cout << "Mang new = ";
    for (int i = 0; i <= n; i++)
    {
        if (kiem_tr_sn(a[i]) == false)
       {
            std::cout << a[i] << "; ";
       }
       
    }
    
}

void sap_xep_tang_dau_cua_mang(int a[], int n) // sap xep tang nua dau
{
    int tam;
    std::cout << "sap xep mang = ";
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        for (int j = i + 1; j < n / 2; j++)
        {
            if (a[i] > a[j]){
               tam = a[i];
               a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    
}
void sap_xep_giam_sau_cua_mang(int a[], int n){
    int tam;
    for (int i = 0; i < (n / 2); i++)
    {

       for (int j = i + 1; j < (n / 2); j++)
       {
            if (a[i] > a[i])
            {
                tam = a[i];
                a[j] = a[j];
                a[j] = tam;
            }
            
     }
    }
}


// k. sắp xép mảng giảm dần
void mang_giam_dan_di(int a[], int n){
    int bien_chua_tam;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                bien_chua_tam = a[i];
                a[i] = a[j];
                a[j] = bien_chua_tam;
            }
        }
        
    }
    
}
int main(){
    int *a, n;
    a = new int(n);
    std::cout << "Nhap do dai mang = ";
    std::cin >> n;
    Nhaparr(a, n);
    Xuatarr(a, n);

    std::cout << "\n";
    if (chanle(a, n) == true){
        std::cout << "Mang toan so chan";
    } 
   else {
        std::cout << "Mang kh co so chan";
    }
    std::cout << "\n";
    coutsonguyento(a, n);

    std::cout << "\n";
    int tang = mangtangdan(n, a);
    int giam = manggiamdan(n ,a);
    if (tang == 1){
        std::cout << " => Mang sap tang dan";
    }
    else{
        std::cout << " => Mang sap giam dan";
    }   
    std::cout << "\n";

    xoa_phan_tu_trung_nhau(a, n);
    std::cout << "Mang sau khi xoa phan tu trung nhau => ";
    Xuatarr(a, n);
    std::cout << "\n";
    demslchanle(a, n);
    std::cout << "\n";
    int x;
    std::cout << "Nhap phan tu can them = ";
    std::cin >> x;

    int vitri;
    do
    {
        std::cout << "Nhap vi tri can them = ";
        std::cin >> vitri;
        if (vitri < 0 || vitri > n){
            std::cout << "\n vi tri can them trong doan tu [0, " << n << "]";
        }
    } while (vitri < 0 || vitri > n);

    themphantuvaovitribatki(a, n, x, vitri);
    Xuatarr(a, n);    

    std::cout << "\n";
    so_chinh_phuong(a, n);
    std::cout << "Mang cu = ";
    Xuatarr(a, n);
    std::cout << "\n";
    in_ra_pt_la_snt(a, n);
    sap_xep_tang_dau_cua_mang(a, n);
    Xuatarr(a, n);
    std::cout << "\n";

    sap_xep_giam_sau_cua_mang(a, n);
    Xuatarr(a, n);

    // mảng giảm dần
    std::cout  << "---mang giam dan--- ";
    mang_giam_dan_di(a, n);
    Xuatarr(a, n);
}