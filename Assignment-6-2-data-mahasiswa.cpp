#include<iostream>

using namespace std;

int main(){
    struct student{
        string student_id;
        int midterm_score, final_score, average_score;
    };

    int n;
    cout << "Masukkan banyaknya mahasiswa: ";
    cin >> n;

    while(n > 50){
        cout << "Input tidak valid" << endl;
        cout << "Masukkan banyaknya mahasiswa: ";
        cin >> n;
    }

    student student[n];

    for(int i = 0; i < n; i++){
        cout << "(NIM UTS UAS) " << i+1 << " : ";
        cin >> student[i].student_id >> student[i].midterm_score >> student[i].final_score;
        student[i].average_score = (student[i].midterm_score + student[i].final_score) / 2;
    }

    //output id and average
    for(int i = 0; i < n; i++){
        cout << "NIM : " << student[i].student_id << ", Rata-rata :" << student[i].average_score << endl;
    }
    return 0;
}