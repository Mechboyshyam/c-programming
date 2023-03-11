
// Addition of two numbers using user output
#include <stdio.h>

int main(){
    int length, breadth;

    printf("What is the length of the rectangle\n");
    scanf("%d", &length);

    printf("What is the breadth of the rectangle\n");
    scanf("%d", &breadth);

    printf("Area of rectangle is %d", length * breadth);

     return 0;
}