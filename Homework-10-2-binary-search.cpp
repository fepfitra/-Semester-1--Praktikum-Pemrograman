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

    int left = 0;
    int right = 7;
    int mid = (left + right) / 2;

    while(left <= right){
        if(student[mid].studentId == searchId){
            cout << "Data berhasil ditemukan!" << endl;
            cout << student[mid].name << " " << student[mid].score << endl;
            student[mid] = {searchId, "Raffi Ahmad", 100};
            cout << "Data berhasil diubah!" << endl;
            cout << student[mid].name << " " << student[mid].score << endl;
            break;
        } else if(student[mid].studentId < searchId){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }


}