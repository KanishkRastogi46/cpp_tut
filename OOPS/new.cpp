#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
        int empid;
        string name;
        Employee(){                                                 // default constructor
            empid= 0;
            name= "Employee-XX";
        };
        Employee(int id, string nm){                               // parameter constructor
            empid= id;
            name= nm;
        };
        Employee(const Employee &emp){                             // copy constructor
            empid= emp.empid;
            name= emp.name;
        };
        int getValue(){return this->empid;}
        void setValue(int newValue){empid= newValue;}
};

int main(){
    Employee emp1;
    Employee emp2(1,"kanishk");
    Employee emp3(emp1);

    printf("The empid is %d\n", emp1.getValue());
    printf("The empid is %d\n", emp2.getValue());
    printf("The empid is %d\n", emp3.getValue());
    return 0;
}