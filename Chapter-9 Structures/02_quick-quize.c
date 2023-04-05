#include <stdio.h>
#include <string.h>

struct employee{
    char name[10];
    int code;
    float salary;
};

int main(){
  struct employee e1,e2,e3;
//   <---getting code for first employee--->  
    printf("Enter the name of first employee : ");
    scanf("%s",e1.name);
    printf("Enter the code of first employee : ");
    scanf("%d",&e1.code);
    printf("Enter the salary of first employee : ");
    scanf("%f",&e1.salary);

//   <---getting code for second employee--->  
    printf("Enter the name of second employee : ");
    scanf("%s",e2.name);
    printf("Enter the code of second employee : ");
    scanf("%d",&e2.code);
    printf("Enter the salary of second employee : ");
    scanf("%f",&e2.salary);

//   <---getting code for third employee--->
    printf("Enter the name of third employee : ");
    scanf("%s",e3.name);
    printf("Enter the code of third employee : ");
    scanf("%d",&e3.code);
    printf("Enter the salary of third employee : ");
    scanf("%f",&e3.salary);
     return 0;
}