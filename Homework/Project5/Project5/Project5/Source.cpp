#include<stdio.h>
#include<stdlib.h>
int a = 0, b = 0, c = 0, d = 0, e = 0;
float max=0;
int main()
{
	printf("�@�Ѫ��`���{��:");
	scanf("%d", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%d", &b);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf("%d", &c);
	printf("�@�Ѫ������O:");
	scanf("%d", &d);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf("%d", &e);
		max = ((a / c) * b) + d + e;
	printf("�`��O:%.3f", max);
}