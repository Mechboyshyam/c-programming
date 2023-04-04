#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
        strcpy(e1.name , "Shyam");
        e1.salary = 7.7;
        e1.code = 227;

        printf("My name is %s\n",e1.name);
        printf("In my company my code is %d\n",e1.code);
        printf("Monthly I am getting salary %.2f K per month.\n",e1.salary);
    
     return 0;
}