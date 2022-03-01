#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employe{
    char name[20];
    int age;
};

int main(){
    struct employe emp = {"neha",15};
    // printf("Enter your name : ");
    // scanf("%s", &emp.name);
    // printf("Enter your age : ");
    // scanf("%d", &emp.age);
    // printf("\t\t\t\t\tThe name of employee is %s\n", emp.name);
    // printf("\t\t\t\t\tThe age of employee is %d\n", emp.age);
    return 0;
}