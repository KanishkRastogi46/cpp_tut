#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age<18){
        cout<<"Not eligible to vote";
    } else if(age>=18 && age<=60){
        cout<<"You are an adult working professional and eligible to vote";
    } else{
        cout<<"You are an old citizen and eligible to vote";
    }

    return 0;
}