/*Find the Factorial of entered number*/

#include <stdio.h>

int Factorial(){
    int n = 10; //Any Integer
    int a = 1;
    for (int i =1; i <= n; i++)
    {
        a = a * i;
    }
    printf("Factorial of %d is %d",n,a);
    return 0;
}
