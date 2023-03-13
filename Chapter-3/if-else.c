//  Program for if else condition

#include <stdio.h>

int main(){
    int a ;
    printf("Enter the value \n");
    scanf("%d",&a);

    if(a<=70 && a>=18){
        printf("You are under the age as per vehicle rules, you can drive");
    }

    else{
        printf("You are not under the age as per vehicle rules, you cannot drive");
    }
     return 0;
}