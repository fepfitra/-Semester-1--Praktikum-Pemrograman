#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //input
    int n;
    cout << "Insert the maximum number to calculate the multiplication table : ";
    cin >> n;

    //calculate the digit
    int digit = 1;
    int temp = n*n;
    while (temp >= 10){
        temp /= 10;
        digit++;
    }

    //print header
    for(int i = 0; i < digit; i++){
        cout << " ";
    }
    cout << setw(digit) << right << "    ";
    for (int i=0; i <= n; i++){
        cout << setw(digit) << right << i << " ";
    }
    cout << endl;

    //print content
    for (int i = 0; i<=n; i++){
        cout << setw(digit) << right << i << " -  ";
        for (int j=0; j<=n; j++){
            cout << setw(digit) << right << i*j << " ";
        }
        cout << endl;
    }
}