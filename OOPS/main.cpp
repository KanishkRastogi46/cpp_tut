#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class User{
    string secret= "Hello world!";
    public:
        int id;
        string name;
        User(){};                                                                             // default constructor
        User(int x , string n): id(x) , name(n) {};                                           // parameter constructor
        User(const User &user): id(user.id), name(user.name){};                               // copy constructor  
        ~User(){
            printf("deconstructor");
        }                               
        void print();
        void setSecret(const string &newSecret){
            secret= newSecret;
            cout<<"Setter method"<<endl;
        }
        string getSecret(){
            return secret;
        }
};

void User::print(){
    cout<<"Inside User class and object is "<<this<<endl;
    cout<<"id= "<<this->id<<", name= "<<this->name<<endl;
}

int main(){
    User obj1(1, "kanishk");
    obj1.print();

    printf("\n");

    User obj2(2, "Rahul");
    obj2.name= "Rahul raj";
    obj2.print();

    obj2.setSecret("Hello duniya !");
    cout<<"secret= "<<obj2.getSecret()<<endl;

    printf("\n");

    User obj3(obj2);
    obj3.print();

    printf("\n");
    obj2.print();

    return 0;
}