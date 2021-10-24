#include <stdio.h>

int Marks() {
    int a, b, c;
    float avg;
    printf("Enter the marks in 3 subjects=");
    scanf("%d %d %d", &a, &b, &c);
    avg = (float)(a + b + c) / 3;
    if (avg >= 75) {
        printf("Your Grade is A");
    }
    else if (avg < 75 && avg >= 50) {
        printf("Your Grade is B");
    }
    else if (avg < 50 && avg >= 25) {
        printf("Your Grade is C");
    }
    else {
        printf("Your Grade is D");

        return 0;
    }
    printf("\nYour average grade is %f", avg);
    return 0;
}