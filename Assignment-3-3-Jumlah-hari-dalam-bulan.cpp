#include <iostream>

using namespace std;

int main(){
    int bulan;
    cout << "Bulan ke (1-12) : ";
    cin >> bulan;

    switch(bulan){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Jumlah hari: 31 Hari";
            break;
        case 2:
            cout << "Jumlah hari: 28 Hari";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Jumlah hari: 30 Hari";
            break;
        default:
            cout << "Error: Input di luar range";
            break;

    }
}