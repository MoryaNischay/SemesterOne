/* Find Simple Interest of the values Inputted */

#include<stdio.h>
int SimpleInterest()
{
    printf("Enter The Principle, Interest, Time=");
    float a,b,c, interest;
    scanf("%f %f %f",&a,&b,&c);
    interest =a*b*0.01*c;
    printf("The Interest is %f",interest);

    return 0;
}
