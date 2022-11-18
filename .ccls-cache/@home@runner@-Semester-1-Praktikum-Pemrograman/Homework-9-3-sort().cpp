#include<iostream>
#include<algorithm>
#include<chrono>

using namespace std;
using namespace std::chrono;

void menu();
int cppSort(int arr[], int n, bool asc);
void printArray(int arr[], int n);
void clearScreen();

int main(){
    menu();
    return 0;
}

void menu(){
    int n=0, arr[100000];
    int ndata = 0;
    struct {
        bool asc;
        int runningTime;
        int countData;
    } data[100000];
    char choice;
    while(true){
        cout << "1. Masukkan jumlah array" << endl;
        cout << "2. Isi array secara random" << endl;
        cout << "3. Urutkan data secara Ascending" << endl;
        cout << "4. Urutkan data secara Descending" << endl;
        cout << "5. History" << endl;
        cout << "Pilih opsi [1-5] : ";
        cin >> choice;
        clearScreen();
        printArray(arr, n);

        switch(choice){
            case '1':
                cout << "Masukkan jumlah data : ";
                cin >> n;
                
                for(int i=0; i<n; i++){
                    arr[i] = rand() % 100000;
                }
                clearScreen();
                break;
            case '2':
                for(int i=0; i<n; i++){
                    arr[i] = rand() % 100000;
                }
                break;
            case '3':
                data[ndata] = {true, cppSort(arr, n, true), n};
                ndata++;
                break;
            case '4':
                data[ndata] = {false, cppSort(arr, n, false), n};
                ndata++;
                break;
            case '5':
                cout << "Orientation\tTime\tData Count" << endl;
                for(int i=0; i<ndata; i++){
                    data[i].asc ? cout << "Ascending" : cout << "Descending";
                    cout << "\t" << data[i].runningTime << " ms\t" << data[i].countData<< endl;
                }
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
        }
    }
}

int cppSort(int arr[], int n, bool asc){
    auto start = high_resolution_clock::now();
    if(asc){
        sort(arr, arr + n);
    } else {
        sort(arr, arr + n, greater<int>());
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    int time = duration.count();

    cout << "Waktu yang dibutuhkan : " << time << " microseconds" << endl;
    return time;
}

void printArray(int arr[], int n){
    int limit = n
    for(int i=0; i<limit; i++){
        cout << arr[i] << " ";
    }
    (limit?n)
    cout << endl;
}

void clearScreen(){
#ifdef WINDOWS
    system("cls");
#else
    // Assume POSIX
    system ("clear");
#endif
}