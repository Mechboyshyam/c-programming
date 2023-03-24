#include <stdio.h>
void sumNdAvg(int i, int j, int *sum, float *avg){
    *sum = i + j;
    *avg = (float)(*sum)/2;
}
int main(){
    int a , b , sum;
    float avrg;

    printf("Enter the first value \n");
    scanf("%d",&a);

    printf("Enter the first value \n");
    scanf("%d",&b);

    sumNdAvg( a, b, &sum, &avrg);
    printf("The sum of two variable is %d\n",sum);
    printf("The average of two variable is %f\n",avrg);
    
     return 0;
}