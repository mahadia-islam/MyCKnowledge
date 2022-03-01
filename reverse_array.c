#include <stdio.h>
#include <stdlib.h>

int reverse(int *arr,int length)
{
    int newArr[length];
    int element = 0;
    for (int i = 0; i < length; i++)
    {
        newArr[i] = *(arr + i);
    }
    for (int i = length; i > 0; i--)
    {
        *(arr + element) = newArr[i - 1];
        element++;
    }
    return 0;
}

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    reverse(arr,10);
    for (int i = 0; i < 10; i++)
    {
        printf("the value is %d\n", arr[i]);
    }
    
    return 0;
}