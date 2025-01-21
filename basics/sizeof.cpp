#include<iostream>
#include<string>
using namespace std;

int main(){

    // character type
    cout<<"Size of char is "<<sizeof(char)*8<<" in bits"<<endl;

    // integer type
    cout<<"Size of int is "<<sizeof(int)*8<<" in bits"<<endl;
    cout<<"Size of short int is "<<sizeof(short int)*8<<" in bits"<<endl;
    cout<<"Size of long int is "<<sizeof(long int)*8<<" in bits"<<endl;
    cout<<"Size of long long int is "<<sizeof(long long int)*8<<" in bits"<<endl;

    // boolean type
    cout<<"Size of bool is "<<sizeof(bool)*8<<" in bits"<<endl;

    // floating type
    cout<<"Size of float is "<<sizeof(float)*8<<" in bits"<<endl;
    cout<<"Size of double is "<<sizeof(double)*8<<" in bits"<<endl;
    cout<<"Size of long double is "<<sizeof(long double)*8<<" in bits"<<endl;

    // string type
    cout<<"Size of string is "<<sizeof(string)*8<<" in bits"<<endl;

    return 0;

}