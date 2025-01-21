#include<iostream>
#include<string>
using namespace std;

int addition(int a, int b){
    return a+b;
};

double addition(double a, double b){
    return a+b;
};

string addition(string fname, string mname, string lname){
    return fname + " " + mname + " " + lname;
}

int main(){
    int ans1 = addition(10, 67);
    double ans2= addition(10.1, 34.78);
    string ans3= addition("kanishk", "kumar", "rastogi");

    cout << "addition(10, 67)= "<<ans1<<endl;
    cout << "addition(10.1, 34.78)= "<<ans2<<endl;
    cout << "addition('kanishk', 'kumar', 'rastogi')= " << ans3 << endl;

    return 0;
}