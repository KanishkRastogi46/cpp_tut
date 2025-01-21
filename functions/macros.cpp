#include<iostream>
using namespace std;

// macros
#define NUM1 10
#define NUM2 20
#define add(a,b) a+b;

int main(){
    int res= add(NUM1, NUM2);
    cout<<"Macros add(10,20)= "<<res<<endl;
    return 0;
}