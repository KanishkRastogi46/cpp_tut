#include<iostream>
using namespace std;

void print(){
    cout<<"Function pointer for print() function"<<endl;
}

int main(){
    void (*pointerToPrint)()= print;            // function pointer
    pointerToPrint();
    return 0;
}