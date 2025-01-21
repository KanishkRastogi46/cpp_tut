#include<iostream>
#define NULL 0
using namespace std;

int func(int num){
    return num+1;
}

void func(int * n){
    printf("Pointer to func %p", n);
}

int main(){
    printf("func(34) is %d\n", func(34));
    func(nullptr);

    return 0;
}