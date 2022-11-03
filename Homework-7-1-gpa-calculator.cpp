#include<iostream>

using namespace std;

float calculate_gpa(char nilai[], int sks[], int n){
    float total = 0;
    int total_sks = 0;
    for(int i = 0; i < n; i++){
        switch(nilai[i]){
            case 'A':
                total += 4 * sks[i];
                break;
            case 'B':
                total += 3 * sks[i];
                break;
            case 'C':
                total += 2 * sks[i];
                break;
            case 'D':
                total += 1 * sks[i];
                break;
            case 'E':
                total += 0 * sks[i];
                break;
        }
        total_sks += sks[i];
    }
    return total / total_sks;
}

int main(){
    int n;
    cout << "Masukkan jumlah mata kuliah : ";
    cin >> n;

    char nilai[n];
    int sks[n];

    for(int i = 0; i < n; i++){
        cout << "Masukkan nilai mata kuliah ke-" << i + 1 << " : ";
        cin >> nilai[i];
        cout << "Masukkan sks mata kuliah ke-" << i + 1 << " : ";
        cin >> sks[i];
    }

    cout << endl;

    printf("IPK : %.2f", calculate_gpa(nilai, sks, n));
}