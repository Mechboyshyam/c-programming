#include <stdio.h>
// To find the volume of circle by user input...
int main(){
    int radius,height;
    float pie = 3.142;

    printf("What is the radius of circle\n");
    scanf("%d",&radius);

    printf("What is the height of circle\n");
    scanf("%d",&height);

    printf("The area of circle is %f", pie*radius*radius*height);
     return 0;
}