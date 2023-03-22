//  Basic of function prototype contain prototype call and defination

#include <stdio.h>

void display(); // Function prototype 

int main(){
    printf("Good morning... Have a good day!\n");
    display(); // Function call
    printf("Good night... Sleep well\n");
     return 0;
}

// Function defination
void display(){
    printf("Good afternoon... Keep working\n");
}