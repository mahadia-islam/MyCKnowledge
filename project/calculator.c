#include <stdio.h>
#include <stdlib.h>

// show the options to user that they can choose

void showOperationOptions(char *operation){
    printf("\t\tWhat operation or math you wanna do write this below ? \n");
    printf("\t\t1. + \n");
    printf("\t\t2. - \n");
    printf("\t\t3. x \n");
    printf("\t\t4. / \n");
    scanf("%c", operation);
}

// getting inputs from user

void getNumberInput(float *num1,float *num2){
    printf("\t\tEnter first number : ");
    scanf("%f", num1);
    printf("\t\tEnter second number : ");
    scanf("%f", num2);
}

// method for adding two number

float add(float num1,float num2){
    return num1 + num2;
}

// method for substracting two number

float substract(float num1,float num2){
    return num1 - num2;
}

// method for dividing two number

float divide(float num1,float num2){
    return num1 / num2;
}

// method for multipy two number

float multiply(float num1,float num2){
    return num1 * num2;
}

int main(){
    char c;
    float num1, num2;
    float result;
    showOperationOptions(&c);
    getNumberInput(&num1, &num2);
    switch (c)
    {
        case '+':
            result = add(num1,num2);
            printf("\t\tthe added number is %.2f", result);
            break;
        case '-':
            result = substract(num1,num2);
            printf("\t\tthe substructed number is %.2f", result);
            break;
        case '/':
            result = divide(num1,num2);
            printf("\t\tthe divided number is %.2f", result);
            break;
        case 'x':
            result = multiply(num1,num2);
            printf("\t\tthe multiply number is %.2f", result);
            break;
    }
}