#include<iostream>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice(1-3): ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Option 1";
        break;
    case 2:
        cout<<"Option 2";
        break;
    case 3:
        cout<<"Option 3";
        break;
    default:
        cout<<"Default option";
        break;
    }
}