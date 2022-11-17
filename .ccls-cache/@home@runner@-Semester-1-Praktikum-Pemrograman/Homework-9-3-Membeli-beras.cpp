#include<iostream>
#include<iomanip>
// #include<algorithm>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    struct {
        double w;
        double c;
        double rp;
    } karung[n];

    for(int i=0; i<n; i++){
        cin >> karung[i].w;
    }

    for(int i=0; i<n; i++){
        cin >> karung[i].c;
        karung[i].rp = karung[i].c / karung[i].w;
    }

    for(int i=1; i<n; i++){
        int j = i;
        while(j > 0 && karung[j].rp > karung[j-1].rp){
            swap(karung[j], karung[j-1]);
            j--;
        }
    }

    int i = 0;
    double total = 0;
    while(x > 0 && i < n){
        if(x >= karung[i].w){
            total += karung[i].c;
            x -= karung[i].w;
        } else {
            total += karung[i].rp * x;
            x = 0;
        }
        i++;
    }

    cout << setprecision(5) << fixed << total << endl;
}