#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a, b, c, d,e,f,g;
	printf("�@��Ѫ��`���{��(����):");
	scanf_s("%lf", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf_s("%lf", &b);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf_s("%lf", &c);
	printf("�@�Ѫ������O:");
	scanf_s("%lf", &d);
	printf("�@�Ѫ��q�ԶO(�L���O)");
	scanf_s("%lf", &e);
	f = (a/c)*b;
	g = f + d + e;
	printf("�`��O:%.2lf\n",g);







	system("pause");
	return 0;
}