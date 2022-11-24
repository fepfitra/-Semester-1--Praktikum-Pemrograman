#include<iostream>

using namespace std;

void reverse_number(int n){
    if(n < 10){
        cout << n;
    } else {
        cout << n % 10;
        reverse_number(n / 10);
    }
}

int main(){
    int n;
    cout << "Masukkan angka : ";
    cin >> n;
    cout << "Hasil reverse : ";
    reverse_number(n);
}