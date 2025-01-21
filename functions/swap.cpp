#include<iostream>
using namespace std;

void swap1(int * a, int * b){
    int temp= * a;
    * a= * b;
    * b= temp;
}

void swap2(int & a , int & b){
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

int main(){
    int a= 12, b=15;
    printf("before swap function a= %d , b= %d\n", a , b);
    swap1(&a, &b);
    printf("after swap1 function a= %d , b= %d\n", a , b);
    swap2(a , b);
    printf("after swap2 function a= %d , b= %d", a , b);
    return 0;
}