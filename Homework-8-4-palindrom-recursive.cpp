#include<iostream>

using namespace std;

bool isPalindrome(string str, int start, int end){
    if(start >= end){
        return true;
    } else if(str[start] != str[end]){
        return false;
    } else {
        return isPalindrome(str, start + 1, end - 1);
    }
}

int main(){
    string str;
    cout << "Masukkan kata : ";
    cin >> str;
    if(isPalindrome(str, 0, str.length() - 1)){
        cout << "Kata tersebut adalah palindrom";
    } else {
        cout << "Kata tersebut bukan palindrom";
    }
}