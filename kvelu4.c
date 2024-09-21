// Kingslee Velu
// CSC - 321-40
// 09/21/2024
// Lab# 4b

#include <stdio.h>

int main()
{
    int a;
    short b;
    char c;
    float d;

    printf("Enter integer value: ");
    scanf("%d", &a);

    printf("Enter short integer value: ");
    scanf("%hd",&b);

    printf("Enter char value: ");
    scanf(" %c",&c);

    printf("Enter float value: ");
    scanf("%f",&d);

    if(a > 5)
    {
        printf("Integer variable is greater than 5\n");
    }

    if(b > 100)
    {
        printf("Short integer is greater than 100\n");
    }
    if(c != 'k')
    {
        printf("Entered character is not equal to k\n");
    }
    if(d != 5.5f)
    {
        printf("Entered number is not a decimal\n");
    }

    return 0;
}

