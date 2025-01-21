#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    num= 11;

    // left and right shift
    num= num << 2;                      // left shift:  num = 11 << 2 = 1011 << 2 = 44
    cout<<"num= "<<num<<endl;            
    num= num >> 1;                      // right shift: num = 44 >> 1 = 101100 >> 1 = 22
    cout<<"num= "<<num<<endl;

    // bitwise  AND, OR, XOR and NOT
    int num2;
    num2= 12;
    num2= num2 & num;                   // bitwise AND: num2 = 12 & 22 = 01100 & 10110 = 00100 = 4
    cout<<"num2= "<<num2<<endl;
    num2= num2 | num;                   // bitwise OR:  num2 = 4 | 22 = 00100 | 10110 = 10110 = 22 
    cout<<"num2= "<<num2<<endl;
    num2= num2 ^ num;                   // bitwise XOR: num2 = 22 ^ 22 = 10110 ^ 10110 = 00000 = 0
    cout<<"num2= "<<num2<<endl;
    num2= 13;
    num2= ~num2;                        // bitwise NOT: num2 = ~ 13 = 1101 + 0001 = 1110 = -14
    cout<<"num2= "<<num2<<endl;
}