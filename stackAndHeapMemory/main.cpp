#include<iostream>
#include<string>
using namespace std;

struct Employee{
    int id;
    string name;
};

int main(){
    // stack
    int num= 12;
    Employee emp1= {1, "krishna"};

    // heap
    int * num_= new int;
    *num_= 200;
    Employee *emp= new Employee();
    emp->id= 2;
    emp->name= "kanishk";

    delete num_;
    delete emp;
    
    return 0;
}