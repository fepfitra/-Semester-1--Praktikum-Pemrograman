#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Masukkan angka : ";
    cin >> n;
    n/=2;

    for (int i = n; i >= 0; i--){
        cout << 2*i << " ";
    }
}