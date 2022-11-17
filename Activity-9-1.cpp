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

    //insertion sort ascending by student nim
    for(int i=1; i<7; i++){
        int j = i;
        while(j>0 && mahasiswa[j].nim < mahasiswa[j-1].nim){ //compare student nim
            swap(mahasiswa[j], mahasiswa[j-1]);
            j--;
        }
    }

    //output table
    cout << "NIM    Nama                          Nilai    Jarak Rumah" << endl;
    for(int i=0; i<7; i++){
        cout << setw(6) << mahasiswa[i].nim << " " << setw(30) << left << mahasiswa[i].nama<< setw(9) <<  mahasiswa[i].nilai << setw(9) << mahasiswa[i].jarakRumah << endl;
    }
}