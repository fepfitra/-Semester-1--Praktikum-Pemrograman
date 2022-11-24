#include<iostream>
#include<algorithm>
#include<chrono>

using namespace std;
using namespace std::chrono;

void menu();
int insertionSort(int arr[], int n, bool asc);
int selectionSort(int arr[], int n, bool asc);
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
        string method;
        bool asc;
        int runningTime;
        int countData;
    } data[100000];
    char choice;
    while(true){
        cout << "1. Masukkan jumlah array" << endl;
        cout << "2. Isi array secara random" << endl;
        cout << "3. Urutkan data secara Ascending dengan insertion sort" << endl;
        cout << "4. Urutkan data secara Descending dengan insertion sort" << endl;
        cout << "5. Urutkan data secara Ascending dengan selection sort" << endl;
        cout << "6. Urutkan data secara Descending dengan selection sort" << endl;
        cout << "7. History" << endl;
        cout << "Pilih opsi [1-7] : ";
        cin >> choice;
        clearScreen();
        printArray(arr, n);

        switch(choice){
            case '1':
                cout << "Masukkan jumlah data : ";
                cin >> n;
                
                for(int i=0; i<n; i++){
                    arr[i] = 0;
                }
                clearScreen();
                break;
            case '2':
                for(int i=0; i<n; i++){
                    arr[i] = rand() % 100000;
                }
                break;
            case '3':
                data[ndata] = {"Insertion Sort", true, insertionSort(arr, n, true), n};
                ndata++;
                break;
            case '4':
                data[ndata] = {"Insertion Sort", false, insertionSort(arr, n, false), n};
                ndata++;
                break;
            case '5':
                data[ndata] = {"Selection Sort", true, selectionSort(arr, n, true), n};
                ndata++;
                break;
            case '6':
                data[ndata] = {"Selection Sort", false, selectionSort(arr, n, false), n};
                ndata++;
                break;
            case '7':
                cout << "Metode\t\t\tOrientation\tTime\tData Count" << endl;
                for(int i=0; i<ndata; i++){
                    cout << data[i].method << "\t\t";
                    data[i].asc ? cout << "Ascending" : cout << "Descending";
                    cout << "\t" << data[i].runningTime << " ms\t" << data[i].countData<< endl;
                }
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
        }
    }
}

int insertionSort(int arr[], int n, bool asc){
    auto start = high_resolution_clock::now();
    if(asc){
        for(int i=1; i<n; i++){
            int j = i;
            while(j > 0 && arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    } else {
        for(int i=1; i<n; i++){
            int j = i;
            while(j > 0 && arr[j] > arr[j-1]){
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    int time = duration.count();

    cout << "Waktu yang dibutuhkan : " << time << " microseconds" << endl;
    return time;
}

int selectionSort(int arr[], int n, bool asc){
    auto start = high_resolution_clock::now();
    if(asc){
        for(int i=0; i<n-1; i++){
            int min = i;
            for(int j=i+1; j<n; j++){
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
        }
    } else {
        for(int i=0; i<n-1; i++){
            int max = i;
            for(int j=i+1; j<n; j++){
                if(arr[j] > arr[max]){
                    max = j;
                }
            }
            swap(arr[i], arr[max]);
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    int time = duration.count();

    cout << "Waktu yang dibutuhkan : " << time << " microseconds" << endl;
    return time;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
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