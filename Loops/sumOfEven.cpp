//Program to print the sum of all the even numbersr upto n.

#include <iostream>
#include<stdio.h>
using namespace std;

int main(){

    int n, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sum = sum + i;
        }
    }
    cout << "Sum of all the Even numbers upto " << n << " is " << sum << endl;

}