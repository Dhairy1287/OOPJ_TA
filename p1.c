#include <stdio.h>
void main(){
	int n,i;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter numbers:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nIn normal order:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	printf("\nIn reverse order:\n");
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
