#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Vui long nhap n = " ;
    cin >> n;
    int result = 1;                       
    int i = 1; 
    for (i ; i <= n; i = i + 1)
    {
       if (n % 2 == 0){
           if (i % 2 == 0)
           {
               cout << " " << i << endl;
               result = result * i; // 1  3  5  7  9
           }
       }
    //    cout << " " << i << endl;
    }
    cout << result;
}
arr