#include <stdio.h>
#include <stdlib.h>


int main(){
    int radius;
    printf("What is the radius of your circle : ");
    scanf("%d", &radius);
    float pi = 3.1416;
    float circle = 2 * pi * radius;
    printf("the are of circle is %.2f", circle);
    return 0;
}