#include <iostream>
#include <math.h> // use to perform methamatical operations like min, max...
using namespace std;

// Types:
// void -> Which does not return anything
// return -> 
// parameterised ->
// non-parameterised -> 

/*
void printNames(){
    cout << "Hey, Eakem!!" << endl;
}
*/

/*
void printNames(string name){
    cout << "Hey, " << name << endl;
}
*/

int sum(int num1, int num2){
    return num1 + num2;
}

int main(){
    // string name;
    // cout << "Enter the name: ";
    // cin >> name;

    // printNames(name);

    int num1, num2;
    cout << "Enter the numbers: ";
    cin >> num1 >> num2;

    cout << "The Sum of two numbers are: " << sum(num1, num2) << endl;

    return 0;
}