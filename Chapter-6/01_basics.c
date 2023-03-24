#include <stdio.h>

int main(){
    int i = 9220;
    int *j = &i; // it will store the value of i in j
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n",*(&j));
    printf("The address of i is %u\n",&i);
    printf("The value of i is %u\n",*(&j));
    printf("The address of j is %u\n",j);
     return 0;
}