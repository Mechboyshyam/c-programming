//  Program to find table of multiplication

#include <stdio.h>

int main(){
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    while (a)
    {
        printf("10 x %d =%d\n",a,10*a);
        a--;
    }
    
     return 0;
}