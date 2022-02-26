#include <stdio.h>
#include <stdlib.h>


int main(){
    int length, breadth;
    printf("Enter the length of rectangle : ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("The are of rectangle is %d", area);
    return 0;
}