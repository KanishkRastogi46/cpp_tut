#include <iostream>
#include <string>
#include <memory>
using namespace std;

// user class
class User{
public:
    User(){printf("Created User\n");};                            // constructor
    ~User(){printf("Destroying the obj %p \n", this);};            // destructor
    void func(){printf("Test function \n");};                      // test function
};


int main(){

    // unique pointer
    {
        unique_ptr<User> user1= make_unique<User>();         // unique pointer
        user1->func();
        // not allowed in unique_ptr
        // unique_ptr<User> user= user1;
    }

    // shared and weak pointer
    {
        shared_ptr<User> user2= make_shared<User>();         // shared pointer       
        user2->func();

        shared_ptr<User> user3= user2;                       // shared pointer
        user3->func();

        weak_ptr<User> user4= user2;                         // weak pointer
    }

    printf("Code ended");
    return 0;
}