#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("�п�J��ӼƦr:");
	scanf("%d %d", &a, &b);
	c = b % a;
	if (c == 0)
		printf("%d�O%d������", b, a);
	else
		printf("%d���O%d������", b, a);
}