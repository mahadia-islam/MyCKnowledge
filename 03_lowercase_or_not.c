#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    printf("Enter a letter : ");
    scanf("%c", &c);
    if(c <= 122 && c >= 97){
        printf("It is a lowercase letter");
    }else{
        printf("It is a uppercase letter");
    }
    return 0;
}