#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){


    int tanggal;
    string bulan;
    cout << "Masukkan tanggal dan bulan (Contoh: 17 Agustus) : ";
    cin >> tanggal >> bulan;
    for_each(bulan.begin(), bulan.end(), [](char & c){
        c = tolower(c);
    });

    string zodiak;
    if(bulan == "januari"){
        if(tanggal>= 1 && tanggal<20){
            zodiak = "Capricorn";
        }else(tanggal>= 20 && tanggal<=31);{
            zodiak = "Aquarius";
        }
    }else if(bulan == "februari"){
        if(tanggal<19){
            zodiak = "Aquarius";
        }else{
            zodiak = "Pisces";
        }
    }else if(bulan == "maret"){
        if(tanggal<21){
            zodiak = "Pisces";
        }else{
            zodiak = "Aries";
        }
    }else if(bulan == "april"){
        if(tanggal<20){
            zodiak = "Aries";
        }else{
            zodiak = "Taurus";
        }
    }else if(bulan == "mei"){
        if(tanggal<21){
            zodiak = "Taurus";
        }else{
            zodiak = "Gemini";
        }
    }else if(bulan == "juni"){
        if(tanggal<21){
            zodiak = "Gemini";
        }else{
            zodiak = "Cancer";
        }
    }else if(bulan == "juli"){
        if(tanggal<23){
            zodiak = "Cancer";
        }else{
            zodiak = "Leo";
        }
    }else if(bulan == "agustus"){
        if(tanggal<23){
            zodiak = "Leo";
        }else{
            zodiak = "Virgo";
        }
    }else if(bulan == "september"){
        if(tanggal<23){
            zodiak = "Virgo";
        }else{
            zodiak = "Libra";
        }
    }else if(bulan == "oktober"){
        if(tanggal<23){
            zodiak = "Libra";
        }else{
            zodiak = "Scorpio";
        }
    }else if(bulan == "november"){
        if(tanggal<22){
            zodiak = "Scorpio";
        }else{
            zodiak = "Sagitarius";
        }
    }else if(bulan == "desember"){
        if(tanggal<22){
            zodiak = "Sagitarius";
        }else{
            zodiak = "Capricorn";
        }
    }else{
        cout << "WARNING! Input tidak ditemukan!" << endl;
        zodiak = "Error";
    }
    cout << "Zodiaknya adalah : " << zodiak << endl;
}