#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    printf("Enter number: ");
    int num;
    cin >> num;
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}