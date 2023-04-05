#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name;
};

int main(){
    struct employee facebook[3];
    // <--for employee 1-->
    facebook[0].code = 100;
    facebook[0].salary = 100000;
    strcpy(facebook[0].name,"Shyam"); 
    
    // <--for employee 2-->
    facebook[1].code = 101;
    facebook[1].salary = 100000;
    strcpy(facebook[0].name,"Vikas"); 
    
    // <--for employee 3-->
    facebook[2].code = 102;
    facebook[2].salary = 100000;
    strcpy(facebook[0].name,"Kunal");
     return 0;
}