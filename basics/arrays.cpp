#include<iostream>
using namespace std;

int main(){
    int arr[4];
    arr[0]= 1;
    arr[1]= 2;
    arr[2]= 3;
    arr[3]= 4;
    cout << arr[0] << " , " << arr[1] << " , " << arr[2] << " , " << arr[3] << endl;

    int *pos;
    pos= arr;
    *pos= 23;
    pos++;
    *pos= 24;
    pos++;
    *pos= 25;
    pos++;
    *pos= 26;
    cout << arr[0] << " , " << arr[1] << " , " << arr[2] << " , " << arr[3] << endl;

    return 0;
}