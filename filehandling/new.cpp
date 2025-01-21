#include<iostream>
#include<string>

constexpr int maxBuffer= 1024;

using namespace std;

int main(){
    const char * file= "myfile.txt";
    const char * info= "my name is kanishk\n";

    // for writing into the file
    // FILE * fh = fopen(file, "w");
    // for (int i = 0; i < 10; i++){
    //     fputs(info, fh);
    // }
    // fclose(fh);

    // for reading the file
    FILE * fh = fopen(file, "r");
    char buf[maxBuffer];
    while (fgets(buf, maxBuffer, fh)) {
        fputs(buf, stdout);
    }
    fclose(fh);

    
    return 0;
}