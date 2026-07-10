//1) Write a program to find whether a number is Positive or Negative. (A)  
#include <stdio.h>

void main() {
    int no;
    
    printf("Enter a number: ");
    scanf("%d",&no);
    
    if(no>0){
        printf("%d is positive",no);
    }
    else{
        printf("%d is negative",no);
    }
}
