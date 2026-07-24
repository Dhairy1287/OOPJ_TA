#include <stdio.h>
#include <math.h>

void main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);
}
