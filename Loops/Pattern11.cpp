/*
Program to print the following pattern
A B C D 
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}