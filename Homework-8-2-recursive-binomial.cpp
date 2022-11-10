#include<iostream>

using namespace std;

int binomial(int n, int k){
    if(k == 0 || k == n){
        return 1;
    } else {
        return binomial(n - 1, k - 1) + binomial(n - 1, k);
    }
}

int main(){
    int n, k;
    cout << "Masukkan nilai n : ";
    cin >> n;
    cout << "Masukkan nilai k : ";
    cin >> k;
    cout << "Hasil binomial : " << binomial(n, k);
}