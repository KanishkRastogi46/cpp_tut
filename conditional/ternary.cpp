#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;

    cout<<"Enter age: ";
    cin>>age;

    // ternary operator
    string eligibility= age>=18 ? "Eligible to vote" : "Not eligible to vote";
    cout<<eligibility;

    return 0;
}