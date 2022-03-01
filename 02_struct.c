#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;

void display(date d){
    printf("The date is : %d/%d/%d\n", d.day, d.month, d.year);
}

int date_comp(date d1,date d2){
    if((d1.day == d2.day) && (d1.month == d2.month)  && (d1.year == d2.year)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    struct date d1 = {28,2,2022};
    struct date d2 = {28, 3, 2022};
    int isSame = date_comp(d1, d2);
    if(isSame){
        printf("Yes they are same");
    }else{
        printf("They are not same");
    }
}