#include <stdio.h>

void main() {
    int N, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    average = (float)sum / N;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}

// Output:
// Enter the number of elements: 5
// Enter 5 numbers:
// 1
// 2
// 3
// 4
// 5
// Sum = 15
// Average = 3.00

