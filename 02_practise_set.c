#include <stdio.h>
#include <stdlib.h>

int main(){
    int math, chemistry, physics;
    printf("Enter your math number : ");
    scanf("%d", &math);
    printf("Enter your chemistry number : ");
    scanf("%d", &chemistry);
    printf("Enter your physics number : ");
    scanf("%d", &physics);
    int total_number = math + chemistry + physics;
    if(total_number >= 240){
        printf("You are allowed to study in science in our school");
    }else if(total_number >= 200 && math >= 80){
        printf("You are allowed to study in commerce in our school");
    }else if(math > 33 && chemistry > 33 && physics > 33){
        printf("You are allowed to study in arts");
    }
    return 0;
}