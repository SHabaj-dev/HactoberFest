//Program to print the fibonacci series
#include<iostream>
using namespace std;

int main(){
    int zero = 0, next = 1, n, sum;
    cin >> n;

    cout << zero << " " << next << " ";

    for(int i = 3; i <= n; i++){
        sum = next + zero;
        cout << sum << " ";
        zero = next;
        next = sum;
    }
    
}