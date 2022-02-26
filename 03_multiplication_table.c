#include <stdio.h>
#include <stdlib.h>

int multiplication_table(){
    int num;
    printf("Enter a number of which you want a mulpliation table : ");
    scanf("%d", &num);
    printf("\n\n\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("\t\t\t%d x %d = %d\n", num, i, num * i);
    }
    printf("\n\n\n");
    return 0;
}

int main(){
    multiplication_table();
    return 0;
}