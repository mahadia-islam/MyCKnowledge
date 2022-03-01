#include <stdio.h>
#include <stdlib.h>

int stringLength(char str[]){
    // int num = ;
    printf("The length of string is %d", sizeof(str) / sizeof(str[0]));
    return 0;
}

int main(){
    char name[] = "mahadia";
    stringLength(name);
    return 0;
}