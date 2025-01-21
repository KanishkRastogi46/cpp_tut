#include<iostream>
using namespace std;

int main(){
    int num[]= {10,20,30,40,50};

    for(int *pos= num; *pos!=0; pos--){
        cout << pos << endl;
    }
    return 0;
}