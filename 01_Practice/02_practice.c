#include <stdio.h>
// To find the area of circle by user input...
int main(){
    int radius;
    float pie = 3.142;

    printf("What is the radius of circle\n");
    scanf("%d",&radius);

    printf("The area of circle is %f", pie*radius*radius);
     return 0;
}