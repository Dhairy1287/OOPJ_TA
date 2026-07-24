	//6) Write a program to Copy given string into another string without using built-in function. (C)
//Input:
#include <stdio.h>

void main() {
    char source[100], destination[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    while (source[i] != '\0' && source[i] != '\n') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';  

    printf("Copied string: %s\n", destination);
}

// Output:
// Enter a string: Dharmik
// Copied string: Dharmik

