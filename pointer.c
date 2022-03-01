#include <stdio.h>
#include <stdlib.h>

int includer(int *j){
    *j = *j - 5;
    return 0;
}

int main(){
    int i = 10;
    printf("Now the value of i is %d\n", i);
    includer(&i);
    printf("Now the value of i is %d\n", i);
    return 0;
}