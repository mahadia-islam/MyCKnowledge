#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10];
    int num;
    printf("for which number you want a multiply table : ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (i + 1) * num;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, arr[i]);
    }
    
    return 0;
}