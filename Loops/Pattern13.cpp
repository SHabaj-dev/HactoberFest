/*
Program to print the following Pattern
1 2 3 4 
2 3 4 5
3 4 5 6
4 5 6 7
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int value = i;
        for(int j = 1; j <= n; j++){
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
}