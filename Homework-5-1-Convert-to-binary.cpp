#include<iostream>

using namespace std;

int main(){
    cout  << "Insert a number : ";

    int n;
    cin >> n;

    cout << "The result of the number " << n << " in binary is : ";
    while(n > 0){
        cout << n%2 << " ";
        n/=2;
    }
}