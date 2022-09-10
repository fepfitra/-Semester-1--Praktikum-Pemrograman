#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Urutan ke berapa suku yang dicari? : ";
    cin >> n;

    unsigned long long un;
    un = 0;
    for ( int i = 1; i <= n; i++){
        un += i;
    }
    cout << "Suku ke-" << n << " adalah " << un;
}