#include <stdio.h>
#include <math.h>

void main() {
    int num, original, rem, digits = 0;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    while (original != 0) {
        rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);
}