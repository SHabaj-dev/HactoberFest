//Program to print the Fahrenheit to Celsius Degree.

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int start, end;
    cin >> start >> end;
    float d;
    cout << "Faherenheit"<< '\t' << "Celsius"<< endl;
    for(int f = start; f <= end; f++){
        d = ((f - 32) * (5.0/9));
        cout << f << '\t' << '\t'<< d << endl;
    }
}