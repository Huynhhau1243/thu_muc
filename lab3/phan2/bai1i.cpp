#include <iostream>

using namespace std;

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

    // cau i
    cout << "sap xep nua dau tang nua sau giam: ";
    sapxepnuatangnuagiam(a, n);
}
