#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a = 0, b = 0, BMI = 0;
	printf("�п�J�魫(KG):");
	scanf("%f", &a);
	printf("�п�J����(M):");
	scanf("%f", &b);
	BMI = (a / (b * b));
	printf("�A��BMI��:%f", BMI);
	if (BMI >= 18.9 && BMI <= 24.9)
		printf("���`");
	else if (BMI < 18.9)
		printf("�L��");
	else if (BMI >= 25 && BMI <= 29.9)
		printf("�L��");
	else
		printf("�W��");
}