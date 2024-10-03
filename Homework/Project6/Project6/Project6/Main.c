#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a = 0, b = 0, BMI = 0;
	printf("請輸入體重(KG):");
	scanf("%f", &a);
	printf("請輸入身高(M):");
	scanf("%f", &b);
	BMI = (a / (b * b));
	printf("你的BMI為:%f", BMI);
	if (BMI >= 18.9 && BMI <= 24.9)
		printf("正常");
	else if (BMI < 18.9)
		printf("過輕");
	else if (BMI >= 25 && BMI <= 29.9)
		printf("過重");
	else
		printf("超重");
}