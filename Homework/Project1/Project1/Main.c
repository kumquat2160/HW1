#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("number  square  cube\n");
	for (a=1;a<=10;a++)
	{
		printf("%d \t  %d \t  %d\n",a,a*a,a*a*a);
	}
}