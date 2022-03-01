#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d", *arr[0]);
    return 0;
}