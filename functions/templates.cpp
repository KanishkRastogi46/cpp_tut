#include<iostream>
using namespace std;

template<typename T>

T fun(T arg){
    return arg+1;
}

int main(){
    cout <<"result= "<<fun(12)<<endl;
    return 0;
}