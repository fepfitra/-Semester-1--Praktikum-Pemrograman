#include<iostream>

using namespace std;

unsigned long long ackerman(int m, int n){
    if(m > 0 && n == 0){
        return ackerman(m - 1, 1);
    } else if(m > 0 && n > 0){
        return ackerman(m - 1, ackerman(m, n - 1));
    }
    return n + 1;
}

int main(){
    int m, n;
    cout << "Masukkan nilai m : ";
    cin >> m;
    cout << "Masukkan nilai n : ";
    cin >> n;
    cout << "Hasil ackerman : " << ackerman(m, n);
}