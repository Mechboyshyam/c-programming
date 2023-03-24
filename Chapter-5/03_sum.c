#include <stdio.h>

int sum(int a, int b); // fuction prototype declaration

int main(){
    int c;
    c = sum(5 , 3);
    printf("The value of c is %d\n", c);
     return 0;
}

int sum(int a,int b){
    int result;
    result = a + b;
    return result;
}