#include<iostream>
using namespace std;

int main(){
    int arr[]= {11,22,33,44,55};

    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    };

    printf("\n");

    for(int val: arr){
        cout << val << endl;
    }
    
    return 0;
 }