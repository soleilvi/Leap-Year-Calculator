//
// Created by soleil on 8/22/2020.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int year;
    cout << "What year is it?\n" << "Year: ";
    cin >> year;

    if (year/1000 >= 1 && year/1000 < 10) {
        if (year%100==0 && year%400!=0){
            cout << year << " is not a leap year." << endl;
        } else if (year%4==0 || year%400==0){
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    } else {
        cout << "Invalid year, please try again." << endl;
    }
}

//THIS IS BEAUTIFUL I'M CRYING