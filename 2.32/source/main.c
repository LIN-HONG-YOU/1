#include<stdio.h>
#include<stdlib.h>

int main()
{
	double w, h ,bmi;
	printf("�п�J����(m):");
	scanf_s("%lf", &h);
	printf("�п�J�魫(kg):");
	scanf_s("%lf", &w);
	bmi = w / (h*h);
	printf("bmi=%lf\n", bmi);
	if (bmi < 18.5){
		printf("�L��");
	}
	else if (bmi >= 18.5&&bmi <= 24.9){
		printf("�A��");
	}
	else if (bmi >= 25 && bmi <= 29.9){
		printf("�L��");
	}
	else{ printf("�έD"); }
	printf("\n");




	system("pause");
	return 0;
}