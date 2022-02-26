#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 5,chance = 5,win = 0,userInput;
    while(chance != 0){
        printf("Guess the number : ");
        scanf("%d", &userInput);
        if(num == userInput){
            win = 1;
            break;
        }
        chance--;
    }
    if(win){
        printf("You are winner");
    }else{
        printf("Sorry you failed to guess and game is over");
    }
    return 0;
}