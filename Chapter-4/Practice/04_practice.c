//  Program to find factorial by while loop

#include <stdio.h>

int main(){

    int i=1, factorial=1, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(i<=n){
        factorial *=i;
        i++;
    }
        printf("The factorial of %d is %d\n",n,factorial);
     return 0;
}