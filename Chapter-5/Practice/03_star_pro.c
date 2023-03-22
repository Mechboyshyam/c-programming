#include <stdio.h>
void display(int a);
int main(){
    int a;
    printf("Enter the value \n");
    scanf("%d",&a);
    display(a);
     return 0;
}

void display(int a){
    if(a==1){
        printf("*\n");
        return;
    }
    display(a-1);
    for(int i=0; i<(2*a-1); i++){
        printf("*");
    }
    printf("\n");
}