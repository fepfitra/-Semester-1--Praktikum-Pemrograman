#include<iostream>

using namespace std;

int main(){
    struct {
        int studentId;
        string name;
        int score;
    } student[7];

    student[0] = {12340, "Handi Ramadhan", 95};
    student[1] = {12341, "Rio Alfandra", 55};
    student[2] = {12342, "Ronaldo Valentino Uneputty", 80};
    student[3] = {12343, "Achmad Yaumil Fadjri R.", 60};
    student[5] = {12345, "Alivia Rahma Pramesti", 70};
    student[6] = {12346, "Ari Lutfianto", 65};
    student[7] = {12347, "Arief Budiman", 60};

    int searchId;
    cout << "Masukkan ID yang ingin dicari: ";
    cin >> searchId;

    for(int i=0; i<7; i++){
        if(student[i].studentId == searchId){
            cout << "Data berhasil ditemukan!" << endl;
            cout << student[i].name << " " << student[i].score << endl;
            student[i] = {searchId, "Raffi Ahmad", 100};
            cout << "Data berhasil diubah!" << endl;
            cout << student[i].name << " " << student[i].score << endl;
            break;
        }
    }


}