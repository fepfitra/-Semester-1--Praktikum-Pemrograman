#include<iostream>

using namespace std;

int main(){
    cout  << "Insert a number : ";

    int n, m, i, arr[16];
    cin >> n;
    m = n;
    for(i=0; 0<n; i++){
        arr[i] = n%2;
        n/=2;
    }

    cout << "The result of the number " << m << " in binary is : ";
    for(i--; i>=0; i--){
        cout << arr[i] << " ";
    }
}