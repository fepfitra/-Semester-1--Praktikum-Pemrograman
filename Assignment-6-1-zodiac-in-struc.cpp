#include<iostream>

using namespace std;

int main(){
    struct{
        string nama;
        int iTanggal, iBulan, fTanggal, fBulan;
    } zodiak[12];
    
    zodiak[0] = {"Aries", 21, 3, 19, 21};
    zodiak[1] = {"Taurus", 20, 4, 20, 5};
    zodiak[2] = {"Gemini", 21, 5, 20, 6};
    zodiak[3] = {"Cancer", 21, 6, 22, 7};
    zodiak[4] = {"Leo", 23, 7, 22, 8};
    zodiak[5] = {"Virgo", 23, 8, 22, 9};
    zodiak[6] = {"Libra", 23, 9, 22, 10};
    zodiak[7] = {"Scorpio", 23, 10, 21, 11};
    zodiak[8] = {"Sagittarius", 22, 11, 21, 12};
    zodiak[9] = {"Capricorn", 22, 12, 19, 1};
    zodiak[10] = {"Aquarius", 20, 1, 18, 2};
    zodiak[11] = {"Pisces", 19, 2, 20, 3};

    int tanggal, bulan;
    cout << "Masukkan tanggal dan bulan lahir (dd mm): ";
    cin >> tanggal >> bulan;

    bool isError = true;

    for(int i = 0; i < 12; i++){
        if((bulan == zodiak[i].iBulan && tanggal >= zodiak[i].iTanggal) || (bulan == zodiak[i].fBulan && tanggal <= zodiak[i].fTanggal)){
            cout << "Zodiak anda adalah " << zodiak[i].nama << endl;
            isError = false;
            break;
        }
    }

    isError ? cout << "Tanggal lahir tidak valid" << endl : cout << "";

    return 0;
}