#include<iostream>

using namespace std;

int main(){
    cout << "Insert the length of array: ";

    int n;
    cin >> n;

    int a[n];
    int b[n];

    cout << "Enter elements of array 1:" << endl;
    for (int i=0; i<n; i++){
        cout << "Enter element of a" << i+1 << " : ";
        cin >> a[i];
    }

    cout << endl;

    cout << "Enter elements of array 2:" << endl;
    for (int i=0; i<n; i++){
        cout << "Enter element of b" << i+1 << " : ";
        cin >> b[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i] == b[j]){
                cout << a[i] << endl;
            }
        }
    }
}