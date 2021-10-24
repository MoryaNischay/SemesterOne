/* Wrtie a program to check if the number is even or not*/

#include<stdio.h>
int EvenOdd()
{
    int a;
    printf("Enter your number= ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }

    return 0;
}

