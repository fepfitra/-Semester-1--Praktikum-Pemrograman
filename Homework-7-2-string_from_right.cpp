#include<iostream>

using namespace std;

string string_from_right(string str, int n){
    string result = "";
    for(int i = str.length() - n; i < str.length(); i++){
        result += str[i];
    }
    return result;
}

int main(){
    string kata;
    cout << "Masukkan kata : ";
    getline(cin, kata);
    cout << "Masukkan jumlah karakter yang ingin diambil dari kanan : ";
    int n;
    cin >> n;
    cout << "Karakter dari kanan : " << string_from_right(kata, n);
}