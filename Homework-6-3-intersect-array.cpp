#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n=2;
    int a[n][n], b[n][n], c[n][n];

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            c[i][j] = 0;
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout << "Enter element of a" << i+1 << j+1 << " : ";
            cin >> a[i][j];
        }
    }
    cout << endl;

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout << "Enter element of b" << i+1 << j+1 << " : ";
            cin >> b[i][j];
        }
    }
    cout << endl;

    cout << "Matrix 1 : " << endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matrix 2 : " << endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout << setw(4) << b[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Output : " << endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
            cout << setw(4) << c[i][j];
        }
        cout << endl;
    }    
    cout << endl;
}