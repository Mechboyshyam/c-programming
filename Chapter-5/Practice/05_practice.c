#include <stdio.h>

int main(){
    int a = 10;
    int *ptr;
    int **ptr_ptr;

    ptr = &a;
    ptr_ptr = &ptr;

    printf("The value of a is %d", **ptr_ptr);

     return 0;
}