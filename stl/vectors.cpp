#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct User{
    string name;
    int age;
};

int main(){
    vector<int> list;
    list.push_back(10);
    list.push_back(11);
    
    for (auto i = list.begin(); i < list.end(); i++){
        cout<< *i <<endl;
    }

    vector<User> users;
    users.push_back({"kanishk", 21});
    users.push_back({"Rahul", 20});

    // for(auto i= 0; i < users.size(); i++){
    //     cout<<users[i]
    // }
    
    return 0;
}