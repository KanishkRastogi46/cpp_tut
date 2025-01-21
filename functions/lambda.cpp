#include<iostream>
#include<string>

using namespace std;

int main(){
    []{cout<<"Hello world!\n";}();

    auto sum= [](auto a, auto b){return a+b;};
    printf("The sum is %d", sum(10,20));
    //printf("The sum is %s", sum("kanishk ", "Rastogi"));

    return 0;
}