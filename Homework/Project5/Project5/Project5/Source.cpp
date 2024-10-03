#include<stdio.h>
#include<stdlib.h>
int a = 0, b = 0, c = 0, d = 0, e = 0;
float max=0;
int main()
{
	printf("一天的總里程數:");
	scanf("%d", &a);
	printf("汽油一公升/加侖多少錢:");
	scanf("%d", &b);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf("%d", &c);
	printf("一天的停車費:");
	scanf("%d", &d);
	printf("一天的通行費(過路費):");
	scanf("%d", &e);
		max = ((a / c) * b) + d + e;
	printf("總花費:%.3f", max);
}