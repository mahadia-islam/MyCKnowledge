#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter the number to know it is even or odd : ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("It is an even number");
    }else{
        printf("It is a ood number");
    }
    return 0;
}