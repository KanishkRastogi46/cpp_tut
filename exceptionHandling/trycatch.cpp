#include<iostream>
using namespace std;

int main(){
    char res= 'k';

    try{
        throw res;
    }catch(int ex){
        cout << "Integer exception handled" << endl;
    }catch(...){
        cout<<"Something went wrong!\n";
    }
    
    cout<<"Program finished!";
    return 0;
}