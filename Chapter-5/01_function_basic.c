//  Basic of function prototype contain prototype call and defination

#include <stdio.h>

void display();

int main(){
    printf("Good morning... Have a good day!\n");
    display();
    printf("Good night... Sleep well\n");
     return 0;
}

void display(){
    printf("Good afternoon... Keep working\n");
}