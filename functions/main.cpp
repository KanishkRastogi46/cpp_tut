#include<iostream>
#include "add.h"
using namespace std;

int callByValue(int a, int b, int ans){
    ++a;
    ++b;
    return ans=a+b;
}

int callByReference(int &a, int &b, int &ans){
    ++a;
    ++b;
    return ans=a+b;
}

int callByPointer(int * a, int * b, int * ans){
    * a= * a + 1;
    * b= * b + 1;
    return * ans= * a + * b;
}

int main(){ 
    int a= 12, b= 12, ans= 0;
    
    int res1= callByValue(a, b, ans);
    // value of a , b and ans after callByBalue
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"ans= "<<ans<<endl;
    cout<<"res1= "<<res1<<endl;

    printf("\n");

    int res2= callByReference(a,b,ans);
    // value of a , b and ans after callByBalue
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"ans= "<<ans<<endl;
    cout<<"res2= "<<res2<<endl;

    printf("\n");

    int res3= callByPointer(&a,&b,&ans);
    // value of a , b and ans after callByBalue
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"ans= "<<ans<<endl;
    cout<<"res3= "<<res3<<endl;

    printf("\n");

    // add function from add.h
    int sum= add(112, 101);
    cout<<"Sum= "<<sum<<endl;

    return 0;
}