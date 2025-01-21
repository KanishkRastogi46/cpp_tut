#include<iostream>
using namespace std;

int main(){
    int num= 100;
    int *myp= &num;

    cout << "Value of num is " << num << endl;
    cout << "Location of num is " << myp << endl;

    int &newNum= num;
    newNum= 200;
    myp= &newNum;

    cout << "Value of num is " << num << endl;
    cout << "Location of num is " << myp << endl;
    cout << "Value of newNum is " << newNum << endl;

    num= 300;
    myp= &num;

    cout << "Location of num is " << myp << endl;
    cout << "Value of newNum is " << newNum << endl;

    return 0;
}