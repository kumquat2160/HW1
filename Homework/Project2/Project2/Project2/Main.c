#include<stdio.h>
#include<stdlib.h>
int n = 5;
int main() 
{
	for (int i =1; i <= n; i++) {
		for (int k = i; k <=n-1 ; k++) {
			printf(" ");
		}
		for (int j = 1; j < 2*i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
}