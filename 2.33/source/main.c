#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a, b, c, d,e,f,g;
	printf("一整天的總里程數(公里):");
	scanf_s("%lf", &a);
	printf("汽油一公升/加侖多少錢:");
	scanf_s("%lf", &b);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf_s("%lf", &c);
	printf("一天的停車費:");
	scanf_s("%lf", &d);
	printf("一天的通勤費(過路費)");
	scanf_s("%lf", &e);
	f = (a/c)*b;
	g = f + d + e;
	printf("總花費:%.2lf\n",g);







	system("pause");
	return 0;
}