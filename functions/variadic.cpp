#include<iostream>
#include<string>
using namespace std;

template<typename T> T func(T t){
    cout<<t<<endl;
}

// variadic functions
template<typename T, typename... Args> T func(T t, Args... args){
    cout<<t<<endl;
    func(args...);
}

int main(){
    func("kanishk");
    printf("\n");
    func(1,2,3.5,"kanishk");
    return 0;
}