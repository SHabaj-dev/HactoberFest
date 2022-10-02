/*
Program to print the following pattern
A B C D 
B C D E
C D E F
D E F G
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    

    for(int i = 1; i <= n; i ++){
        char ch = 'A';
        for(int j = 1; j <= n; j++){
            cout << char(ch + i - 1) << " ";
            ch++;
        }
        cout << endl;
    }

}