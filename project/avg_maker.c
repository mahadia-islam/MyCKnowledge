#include <stdio.h>
#include <stdlib.h>

int main(){
    float total = 0;
    int exit = 1;
    int progress = 0;
    while(exit == 1){
        float num;
        printf("Enter number one by one for avarage and type 0 for exit and see result : ");
        scanf("%f", &num);
        if(num == 0){
            exit = 0;
            progress -= 1;
        }
        total += num;
        progress++;
    }
    printf("the avarage is %.2f", total / progress);
}