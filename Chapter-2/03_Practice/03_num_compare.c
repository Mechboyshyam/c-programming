//  Comparision of two numbers

#include <stdio.h>

int max(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int num1, num2, num3,num4;


    printf("Enter the first number\n");
    scanf("%d",&num1);

    printf("Enter the second number\n");
    scanf("%d",&num2);

    printf("Enter the third number\n");
    scanf("%d",&num3);

    printf("Enter the fourth number\n");
    scanf("%d",&num4);

    int first = max(num1,num2);
    int second = max(num3,num4);
    int final = max(first,second);
    printf("%d is the greatest number",final);
    // if((num1>num2) || num1>num3 || num1>num4){
    //     printf("%d is Greater\n",num1);
    // }

    // else if((num2>num1) || num2>num3 || num2>num4){
    //     printf("%d is Greater\n",num2);
    // }

    // else if((num3>num4) || num3>num1 || num3>num2){
    //     printf("%d is Greater\n",num3);
    // }

    // else{
    //     printf("%d is Greater\n",num4);
    // }
     return 0;
}