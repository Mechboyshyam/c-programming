#include <stdio.h>

void printaddress(int a){
    printf("The address of a is %u\n", &a);
}

int main(){
    int i = 4;
    printf("The address of i is %u\n", &i);
    printaddress(i);
    printf("The address of i is %u\n", &i);
     return 0;
}

// The address of function and variable will not same because of 
// in the function the variable is copy of original variable