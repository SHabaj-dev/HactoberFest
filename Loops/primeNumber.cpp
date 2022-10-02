//Program to check given number is prime or not.

#include <iostream>
#include<stdio.h>

using namespace std;

int main(){
    int number,flag = 0;
    cin >> number;

    for(int i = 2; i < number; i++){
        if(number % i == 0){
            flag = 0;
            break;
        }else{
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "Prime Number" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
}