#include<iostream>
#include<string>
using namespace std;

// parent class of Superman class
class Man{
    string _name;
    int _age;
    friend class Superman;  
    // friend class can access all the private attributes and methods of a parent class

protected:
    Man(const string &name, const int &age): _name(name), _age(age){};
    void run(){printf("I can run\n");}
    
public:
    void sayName() const;
};

void Man::sayName()const {
    printf("MY name is %s\n", this->_name);
};

// Superman class inherits from class Man
class Superman: public Man{
public: 
    Superman(const string & name): Man(name, 26){};
    void run(){printf("Inside Superman with age %d\n", this->_age);}
};

int main(){
    Superman clark("clark");
    clark.run();
    return 0;
}