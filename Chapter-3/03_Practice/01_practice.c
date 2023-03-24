// To check as per data you are failed or passed??

#include <stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
    printf("Enter the marks of Physics\n");
    scanf("%d", &physics);

     printf("Enter the marks of chemistry\n");
    scanf("%d", &chemistry);

     printf("Enter the marks of maths\n");
    scanf("%d", &maths);

    total= (physics +  chemistry + maths)/3;

    if((total <40) || physics<33 || chemistry<33 || maths<33){
        printf("You have scored %f, You are fail", total);
    }

    else{
        printf("You have scored %f, You are pass", total);
    }
     return 0;
}