#include<iostream>
#include<fstream>
using namespace std;

void writeFile(const char * filename){
    ofstream fout;
    string line;
    fout.open(filename, ios::app|ios::out);
    while(fout){
        getline(cin , line);
        if(line == "-1"){
            break;
        }
        fout << line << endl;
    }
    fout.close();
}

void readFile(const char * filename){
    ifstream fin;
    string line;
    fin.open(filename);
    while(getline(fin , line)){
        cout << line << endl;
    }
    fin.close();
}

int main(){
    const char * fname = "sample.txt";
    // for writing into the file sample.txt
    writeFile(fname);
    // for reading from the file sample.txt
    readFile(fname);
    // for renaming file name
    rename(fname, "renamed.txt");
    return 0;
}