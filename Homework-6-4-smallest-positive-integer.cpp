#include<iostream>

using namespace std;

int main(){
    int n, min;
    cout << "How many integers? ";
    cin >> n;
    int arr[n];

    cout << endl;
    cout << "Write the integers separated by spaces: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << endl;
    cout << "The smallest missing positive integer is ";
    for(int i=1; i<=100; i++){
        bool found = true;
        for(int j=0; j<n; j++){
            if(arr[j]==i){
                found = false;
                break;
            }
        }
        if(found){
            cout << i;
            break;
        }
    }
}