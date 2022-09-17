#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    cout << "Diberikan persamaan ax^2 + bx + c" << endl;
    cout << "Masukkan a b c : ";
    cin >> a >> b >> c;

    double D, x1, x2;
    int i;
    i = 0;
    D = b*b - 4*a*c;

    // cout << D;

    if (D > 0){
        //rill dan beda
        x1 = (-b + sqrt(D))/2;
        x2 = (-b - sqrt(D))/2;

        cout << "x1 = " << (-b + sqrt(D))/2 << endl;
    }else if (D == 0){
        //rill dan sama
        x1 = -b/(2*a);
        x2 = x1;
    }else{
        //imaginer
        x1 = -b/(2*a);
        x2 = x1;
        i = sqrt(-D)/(2*a);
    }
    
    //is imaginer
    if (i == 0){
        cout << "x1 : " << x1 << endl;
        cout << "x2 : " << x2 << endl;
    }else{
        cout << "x1 : " << x1 << " + " << i << "i" << endl;
        cout << "x2 : " << x2 << " - " << i << "i" << endl;
    }
}