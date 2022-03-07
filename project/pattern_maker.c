#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pattern_number;
    printf("Enter a number for making awesome pattern : ");
    scanf("%d", &pattern_number);
    for (int i = 0; i < pattern_number; i++)
    {
        for (size_t j = 0; j < pattern_number; j++)
        {
            printf("[]");
        }
        printf("\n");
    }
}