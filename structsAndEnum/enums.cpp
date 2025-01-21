#include<iostream>
#include<string>
using namespace std;
#define PI 3.14

enum Msoffice{
    bold= 3,
    italics= 6,
    underline
};

enum Seattype{
    front,
    middle,
    window,
    aisle,
};

int main(){
    cout<<"bold= "<<bold<<endl;
    cout<<"italics= "<<italics<<endl;
    cout<<"underline= "<<underline<<endl;
    cout<<"PI= "<<PI<<endl;

    cout<<"front= "<<front<<endl;
    cout<<"middle= "<<middle<<endl;
    cout<<"window= "<<window<<endl;
    cout<<"aisle= "<<aisle<<endl;

    return 0;
}