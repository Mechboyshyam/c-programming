// program for swap 

#include <stdio.h>

void swap(int *x, int *y);

int main(){
    int a = 1, b = 2;
    printf("The value of a and b before swap is %d and %d\n",a,b);
    swap( &a , &b );
    printf("The value of a and b after swap is %d and %d\n",a,b);
     return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}