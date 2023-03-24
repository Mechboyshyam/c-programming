#include <stdio.h>

void tentimes(int a);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    tentimes(n);
     return 0;
}

void tentimes(int a){
    int total = a * 10;
    printf("The value of given variable in ten-times is %d",total);
}