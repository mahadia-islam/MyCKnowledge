#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 20;
    int b = 10;
    int x = 5;
    int c = a * b / a + x;
    // in this case multiplay will happen first then the divide operator will happen and then at last the plus will happen
    printf("The sum is %d", c);
    return 0;
}