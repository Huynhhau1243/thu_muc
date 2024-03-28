#include <iostream>
using namespace std;

bool isSortedAscending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false; // Nếu phần tử tiếp theo nhỏ hơn phần tử hiện tại, mảng không được sắp xếp tăng dần
        }
    }
    return true; // Mảng được sắp xếp tăng dần
}

bool isSortedDescending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            return false; // Nếu phần tử tiếp theo lớn hơn phần tử hiện tại, mảng không được sắp xếp giảm dần
        }
    }
    return true; // Mảng được sắp xếp giảm dần
}

int main() {
    int n;
    cout << "Nhap do dai mang: ";
    cin >> n;

    int *a; // con tro
    a = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "---mang da nhap---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }

    if (isSortedAscending(a, n)) {
        cout << "Mang duoc sap xep tang." << endl;
    } else if (isSortedDescending(a, n)) {
        cout << "Mang duoc sap xep giam." << endl;
    } else {
        cout << "Mang khong duoc sap xep." << endl;
    }

    delete[] a; // Giải phóng bộ nhớ
    return 0;
}
