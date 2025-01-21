#include<iostream>
#include<string>
using namespace std;

struct User
{
    int age;
    string name;
    int course_count;
    User(int age , string name , int count): age(age), name(name), course_count(count){}
};


int main(){
    User rahul= {20, "rahul", 2};
    User kanishk= {21, "kanishk", 1};

    User *u = &kanishk;
    u->name = "tanishk";
    //*u= {21, "kanishk", 3};

    cout<<kanishk.age<<endl;
    cout<<kanishk.name<<endl;
    cout<<rahul.age<<endl;
    cout<<rahul.name<<endl;

    kanishk.name= "kanishka";
    cout<<kanishk.name<<endl;

    User new_user(12 , "rama", 3);
    cout << new_user->age << endl;
    cout << new_user->name << endl;
    cout << new_user->course_count << endl;

    return 0;
}