#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;

    if(*ptr==arr[2]){
        printf("PTR showing the same location\n");
    }
    else{
        printf("PTR not showing the same location\n");
    }
     return 0;
}