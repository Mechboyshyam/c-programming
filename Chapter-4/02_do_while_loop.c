// Code for do while loop which print the first 4 natural numbers
// For without taking input from user
    // int i = 1;
    // do
    // {
    //     printf("%d is a natural number\n",i);
    //     i++;
    // } while (i<=4);

#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    
    do
    {
        printf("%d is the natural number\n",i+1);
        i++;
    } while (i<n);
    

     return 0;
}