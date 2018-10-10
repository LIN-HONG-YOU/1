#include<stdio.h>
#include<stdlib.h>

int main()
{
	double w, h ,bmi;
	printf("請輸入身高(m):");
	scanf_s("%lf", &h);
	printf("請輸入體重(kg):");
	scanf_s("%lf", &w);
	bmi = w / (h*h);
	printf("bmi=%lf\n", bmi);
	if (bmi < 18.5){
		printf("過輕");
	}
	else if (bmi >= 18.5&&bmi <= 24.9){
		printf("適中");
	}
	else if (bmi >= 25 && bmi <= 29.9){
		printf("過重");
	}
	else{ printf("肥胖"); }
	printf("\n");




	system("pause");
	return 0;
}