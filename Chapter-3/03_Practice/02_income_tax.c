// To check how much tax can pay the user have income greater than 2,50,000/- Rs.

#include <stdio.h>

int main(){
    float income, tax;
    printf("Enter your income\n");
    scanf("%f", &income);

    
    if(income>=250000 && income<=500000){
        tax = 0.20 * (income-250000);
    }

    if(income>=500000 && income<=1000000){
        tax = 0.20 * (income-500000);
    }

    if(income>=1000000){
        tax = 0.20 * (income-1000000);
    }

    printf("You have to pay %f", tax);
     return 0;
}