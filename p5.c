#include <stdio.h>

void main() {
    int N, i;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);
}



