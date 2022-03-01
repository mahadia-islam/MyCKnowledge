#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number to check it is a prime number or not : ");
    scanf("%d",&num);
    int prime = 0;
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0){
            prime = 1;
            break;
        }else{
            prime = 0;
        }
    }

    if(prime){
        printf("It is not a prime number");
    }else{
        printf("It is a prime number");
    }
    
    return 0;
}