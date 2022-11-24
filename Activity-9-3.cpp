#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    //declare struct
    struct{
        int nim;
        string nama;
        int nilai, jarakRumah;
    } mahasiswa[7];

    //input data
    mahasiswa[0] = {96031, "Handi Ramadhan", 90, 1000};
    mahasiswa[1] = {96395, "Rio Alfandra", 55, 6000};
    mahasiswa[2] = {95031, "Ronaldo Valentino Uneputty", 80, 7500};
    mahasiswa[3] = {97027, "Achmad Yaumil Fadjiri R.", 60, 2500};
    mahasiswa[4] = {97029, "Aliva Rahma Pramesti", 70, 10000};
    mahasiswa[5] = {95238, "Ari Lutfianto", 65, 4000};
    mahasiswa[6] = {96565, "Arief Budiman", 60, 2000};

    //home distance descending by bubble sort
    for(int i=0; i<6; i++){
        for(int j=0; j<6-i; j++){
            if(mahasiswa[j].jarakRumah < mahasiswa[j+1].jarakRumah){ //compare distance
                swap(mahasiswa[j], mahasiswa[j+1]);
            }
        }
    }

    //output table
    cout << "NIM    Namaa                         Nilai    Jarak Rumah" << endl;
    for(int i=0; i<7; i++){
        cout << setw(6) << mahasiswa[i].nim << " " << setw(30) << left << mahasiswa[i].nama<< setw(9) <<  mahasiswa[i].nilai << setw(9) << mahasiswa[i].jarakRumah << endl;
    }
}