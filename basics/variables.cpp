#include<iostream>
#include<string>
using namespace std;

int main(){
    // variable declaration
    int num;
    char alphabet; 
    double percentage;
    string full_name;
    bool isVerified= true;

    // user input
    cout << "Enter name: ";
    getline (cin, full_name);
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Enter alphabet: ";
    cin >> alphabet;

    // displaying result
    cout << "Your number is " << num << endl;
    cout << "Your percentage is " << percentage << endl;
    cout << "Your alphabet is " << alphabet << endl;
    cout << "Your name is " << full_name << endl;
    cout << "You are verified or not: " << isVerified << endl;
    return 0;
}