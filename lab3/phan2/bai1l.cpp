#include <iostream>
#include <cmath>

using namespace std;
// cau a
// ham kiem tra so chan
bool kiemtrachan(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (a[i] % 2 == 0) // neu chia het cho 2 thi return true
        {
            return true; 
        }
        return false;
    }
}
// cau b
// ham kiem tra so nguyen to
bool snt(int n)
{
    if (n < 2)
    {
        return false; // neu so do < 2 thi return false
    }
    else 
    {
        if(n == 2) // neu so do = 2 thi return false
        {
            return false; 
        }
        else
        {
            for (int i = 2; i < n; i ++) // tao vong lap tu 2 den n de kiem tra true false
            {
                if( n % i == 0) // neu n chia het cho i thi return false
                {
                    return false;
                }
            }
        }
        return true;
    }
}
// ham in ra so nguyen to
void inrasnt(int a[], int n)
{
    for (int i = 0; i <= n ; i++) // tao vong lap tu 0 den n in ra cac so nguyen to
    {
        if(snt(a[i]) == true) // truyen a[i] vao ham kiem tra de kiem tra phai snt hay khong, neu dung thi in ra
        {
            cout << " " << a[i];
        }
    }
}
// cau h
// ham in ra cac so khong phai so nguyen to
void inrakpsnt(int a[], int n)
{
    for (int i = 0; i <= n ; i ++) // tao vong lap de in ra
    {
        if(snt(a[i]) == false) // truyen a[i] vao ham de kiem tra phai snt hay khong, neu khong thi in ra
        {
            cout << " " << a[i];
        }
    }
}
// cau c
// ham kiem tra tinh tang dan
bool ktrtang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // tao vong lap tu 0 den n - 1
    {
        if (a[i] > a[i + 1]) // so sanh so thu a[i] voi a[i + 1] (vd a[0] = 2 voi a[3] = 1)
        {
            return false; // neu dk tren dung thi return false 
        }
    }
    return true; // con lai return true
}
// ham kiem tra tinh giam dan
bool ktrgiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // tao vong lap tu 0 den n - 1
    {
        if (a[i] < a[i + 1]) // so sang so thu a[i] voi a[i + 1]
        {
            return false; // neu dk tren dung thi return false
        }
    }
    return true; // con lai return true
}
// cau d
void loaitrunglap(int a[], int n)
{
    for (int x = 0; x <= n; x++) // vong lap ngoai de duyet a[x]
    {
        for (int y = x + 1; y <= n; y++) // vong lap trong a[y]
        {
            if (a[x] == a[y]) 
            {
                for (int z = y; z <= n; z++) // neu a[x] = a[y] thi vong lap se bat dau tu z luc nay la y de ghi de phan tu trung len vi tri z do
                {
                    // vd 2 3 3 4 __ a[1] = 3 va a[2] = 3 trung lap => z = y = 1 va z = y + 1 = 2
                    a[z] = a[z + 1]; // => a[1] = a[2] = 3;
                }
                n--; // giam so luong phan tu cua mang di 1 don vi sau khi loai bo trung lap
                y--; // vong lap long ben trong van duyet qua cung 1 vi tri trong truong hop co phan tu trung lap
            }
        }
        cout << " " << a[x];
    }
}
// cau e
// ham so sanh so luong so chan va le
void chanle(int a[], int n)
{
    int m = 0; // bien tam de dem so chan
    int k = 0; // bien tam de dem so le
    for (int i = 0; i <= n; i++) // tao vong lap de dem so chan
    {
        if (a[i] % 2 == 0) // neu dung thi so luong so chan la m tang len 1
        {
            m++;
        }
        else // neu dung ko dung cai if o tren thi so luong so le la k tang len 1
        {
            k++;
        }
    }
    if (m > k) // neu m lon hon k thi so chan nhieu hon
    {
        cout << "so chan nhieu hon so le";
    }
    else if (m < k) // neu m nho hon k thi so chan it hon so le
    {
        cout << "so chan it hon so le";
    }
    else // neu 2 cai tren sai thi so chan bang so le
    {
        cout << "so chan bang so le";
    }
}
// cau i
// ham hoan doi gia tri 2 bien k l
void hoandoi(int &k, int &l) 
{
    int bientam = k; // bien tam de luu k
    k = l;
    l = bientam;
}
// ham sap xep nua dau tang nua sau giam
void sapxepnuatangnuagiam(int a[], int n) 
{
    if (n <= 1) // neu so luong so trong mang nho hon hoac bang 1 thi dung lai
    {  
        return;
    }
    // vi mang bat dau tu 0 nen khi nhap n chan thi tong so luong cac chu so trong mang tu 0 den n se la le va nguoc lai
    if (n % 2 != 0) // neu n la so le thi ko can tim so chinh giua
    {
        // sap xep nua dau tang dan
        for (int i = 0; i <= n / 2; i++) // tao vong lap i tu 0 den n / 2
        {
            for (int j = i + 1; j <= n / 2; j++) // tao vong lap j tu i + 1 den n / 2
            {
                if (a[i] > a[j]) // neu a[i] > a[j] thi hoandoi
                {
                    hoandoi(a[i], a[j]);
                }
            }
            cout << a[i] << " "; // in ra dáy nua dau da sap xep tang dan
        }
    }
    else // neu n la so chan thi tim so chinh giua
    {
        // sap xep nua dau tang dan
        for (int i = 0; i < n / 2; i++) // tao vong lap i tu 0 den n / 2
        {
            for (int j = i + 1; j < n / 2; j++) // tao vong lap j tu i + 1 den n / 2
            {
                if (a[i] > a[j]) // neu a[i] > a[j] thi hoandoi
                {
                    hoandoi(a[i], a[j]);
                }
            }
            cout << a[i] << " "; // in ra day nua dau da xep tang dan
        }
        int sogiua = a[n / 2]; // tim so o giua va in ra neu nhap n la so chan
        cout << sogiua << " ";
    }
	
    // sap xep nua sau giam dan
    for (int i = n / 2 + 1 ; i <= n; i++) // tao vong lap i tu n / 2 + 1 den n
	{
        for (int j = i + 1; j <= n; j++) // tao vong lap j tu i + 1 den n
		{
            if (a[i] < a[j]) // neu a[i] < a[j] thi hoandoi
			{
                hoandoi(a[i], a[j]);
            }
        }
        cout << a[i] << " "; // in ra day nua sau da sap xep giam dan
    }
}
// cau k
// ham sap xep mang giam dan
void sapxepgiamdan(int a[], int n)
{
    for (int i = 0; i <= n; i++) // tao vong lap i tu 0 den n
    {
        for (int j = i + 1; j <= n; j++) // tao vong lap j tu i + 1 den n
        {
            if (a[i] < a[j]) // neu a[i] < a[j] thi hoandoi
            {
                hoandoi(a[i], a[j]);
            }
        }
        cout << a[i] << " "; // in ra mang da sao xep giam dan
        
    }
}
// cau m
// ham chen so x vao mang giam dan
void chensox(int a[], int n, int x)
{
    for (int i = 0; i <= n; i++) // tao vong lap i tu 0 den n
    {
        for (int j = i + 1; j <= n; j++) // tao vong lap j tu i + 1 den n
        {
            if (a[i] < a[j]) // neu a[i] < a[j] thi hoandoi
            {
                hoandoi(a[i], a[j]);
            }
            if (a[i] < x) // neu a[i] < x thi hoan doi
            {
                hoandoi(a[i], x);
            }
        }
        cout << a[i] << " "; // in ra mang da sap xep giam dan va chen them x
    }
}
// cau n
// ham kiem tra doi xung
bool kiemtradx(int a[], int n)
{
    if (n <= 1) // so so luong so trong mang nho hon 1 thi false
    {
        return false;
    }
    if (n % 2 != 0) // neu n la so le thi so luong cac phan tu trong mang la so chan (vi mang chay tu 0 den n)
    {
        for (int i = n / 2; i >= 0; i--) // tao vong lap i nua dau mang tu n / 2 lui ve lai 0
        // vd: n = 5 => n / 2 = 2 thi se lay a[1] a[1] a[2] (ko co so chinh giua)
        {
            for (int j = n / 2 + 1; j <= n; j++) // tao vong lap j nua sau mang tu n / 2 + 1 den n
            // vd: n = 5 => n / 2 + 1 = 3 thi se lay a[3] a[4] a[5] (ko co so chinh giua)
            {
                if (a[i] == a[j]) // nau a[i] = a[j] thi return true
                {
                    return true;
                }
            }
            return false; // con lai return false
        }
    }
    else // neu n la so chan thi so luong cac phan tu trong mang la so le (vi mang chay tu 0 den n)
    {
        for (int i = n / 2 - 1; i >= 0; i--) // tao vong lap i nua dau mang tu n / 2 - 1 lui ve lai 0
        // vd: n = 4 => n / 2 - 1 = 1 thi se lay ra cac so a[0] va a[1] (so chinh giua luc nay la a[2])
        {
            for (int j = n / 2 + 1; j <= n; j++) // tao vong lap j nua sau mang tu n / 2 + 1 den n
            // vd: n = 4 => n / 2 + 1 = 3 thi se lay ra cac so a[3] va a[4] (so chinh giua luc nay la a[2])
            {
                
                if (a[i] == a[j]) // neu a[i] = a[j] thi return true
                {
                    return true;
                }
            }
            return false; // con lai return false
        }
    }
}

int main()
{
    int n; 
    cout << "nhap do dai mang: ";
    cin >> n;

    int *a; // con tro
    a = new int(n);
    // int mang = a[];
    int num;

    for (int i = 0; i <= n; i++) // tao vong lap de nhap mang
    {
        cout << "a[" << i << "]";
        cin >> a[i];
    }
    cout << "---mang da nhap---" << endl;
    for (int i = 0; i <= n; i++) // tao vong lap de xuat mang
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }

    // cau a
    if (kiemtrachan(a, n) == true) 
    {
        cout << "mang chua toan so chan" << endl;
    }
    else 
    {
        cout << "mang ko chua toan so chan" << endl;
    }

    // cau b
    cout << "so nguyen to:";
    inrasnt(a, n);

    // cau h
    cout << "ko phai so nguyen to:";
    inrakpsnt(a, n);

    // cau c
    if (ktrtang(a, n))
    {
        cout << "mang sap xep tang";
    }
    else if (ktrgiam(a, n))
    {
        cout << "mang sap xep giam";
    }
    else 
    {
        cout << "mang ko dc sap xep";
    }

    // cau d
    int u = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
            {
                u++;
            }
        }
    }
    if (u > 0)
    {
        cout << "mang co trung lap => loai bo trung lap:";
        loaitrunglap(a, n);
    }
    else 
    {
        cout << "mang ko co trung lap";
    }
    
    // cau e
    chanle(a, n);

    // cau i
    cout << "sap xep nua dau tang nua sau giam: ";
    sapxepnuatangnuagiam(a, n);

    // cau k
    cout << "sap xep mang giam dan: ";
    sapxepgiamdan(a, n);
    
    // cau m
    int x;
    cout << "nhap so de chen: ";
    cin >> x;
    cout << "mang giam dan sau khi chen them x: ";
    chensox(a, n, x);

    // cau n
    if (kiemtradx(a, n) == true)
    {
        cout << "mang doi xung";
    }
    else
    {
        cout << "mang ko doi xung";
    }
}
