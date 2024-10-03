#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("請輸入兩個數字:");
	scanf("%d %d", &a, &b);
	c = b % a;
	if (c == 0)
		printf("%d是%d的倍數", b, a);
	else
		printf("%d不是%d的倍數", b, a);
}