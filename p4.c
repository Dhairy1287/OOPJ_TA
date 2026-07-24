//Write a program to find length of given string without using built-in function. (A)
#include<stdio.h>
void main(){
    char str[20];
    printf("Enter a string:");
    scanf("%s",str);
    int l=0;
    int i=0;
    while(str[i]!='\0'){
        l++;
        i++;
    }
    printf("length of the string %s is %d",str,l);

}

  
// Output:
// Ramesh
// 6

