#include<stdio.h>
#include<stdlib.h>
int a=0, b=0, c=0,max=0,min=0;
int main() 
{
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) {
			max = a;
			if (b > c) {
				min = c;
			}
			else
			{
				min = b;
			}
		}
		else
		{
			max = c;
			min = b;
		}
	}
	else
	{
		if (b > c) 
		{
			max = b;
			if (a > c) {
				min = c;
			}
			else
			{
				min = a;
			}
		}
		else
		{
			max = c;
			min = a;
		}
	}
	printf("max=%d,min=%d", max, min);
}

