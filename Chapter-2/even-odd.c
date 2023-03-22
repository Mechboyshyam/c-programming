// To check whether the no is even or odd

#include <stdio.h>

int main(){
    int a;

    printf("Enter the value \n");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is even no.",a);
    }
    else{
        printf("%d is odd no.",a);
    }
     return 0;
}