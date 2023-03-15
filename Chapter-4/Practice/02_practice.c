// Program for addition of natural nunbers from 1 to 10.

#include <stdio.h>

int main(){
    int i, sum=0,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);


    for (i=0; i<=n; i++)
    {
        sum +=i;
    }
    
    printf("The addition of natural numbers from 1 to 10 is %d",sum);
    
     return 0;
}