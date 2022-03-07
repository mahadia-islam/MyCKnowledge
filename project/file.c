#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fileptr;
    fileptr = fopen("mahadia.txt", "r");
    char mytext[200];
    fscanf(fileptr, "%s", &mytext);
    printf("The full text read from the file is : %s", mytext);
}