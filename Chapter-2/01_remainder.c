// to find the remainder by user input 
#include <stdio.h>

int main(){
    int a,b;

    printf("The value of divident\n");
    scanf("%d",&a);

    printf("The value of divisor\n");
    scanf("%d",&b);

    printf("The remainder is %d", a%b);
     return 0;
}