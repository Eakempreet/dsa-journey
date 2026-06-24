#include <iostream>
using namespace std;

/*
Take the day no. and print the corresponding day
for 1 print monday.
for 2 print Tresday and so on for the 7 print Sunday
*/

int main(){
    int day;
    cout << "Enter the day (b/w 1 and 7): ";
    cin >> day;
    
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
        break;
    }
    
    return 0;
}