#include <stdio.h>
void main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("\nUsing for loop:\n");
    for(i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n\nUsing while loop:\n");
    i = 1;
    while(i <= N) {
        printf("%d ", i);
        i++;
    }
    printf("\n\nUsing do...while loop:\n");
    i = 1;
        do {
            printf("%d ", i);
            i++;
        } while(i <= N);
}
