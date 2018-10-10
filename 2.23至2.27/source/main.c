#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c,max,min,i;
	//2.23
	printf("Please enter three intergers:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c){ max = a; }
	if (b >= a && b >= c){ max = b; }
	if (c >= b && c >= a){ max = c; }
	if (a <= b && a <= c){ min = a; }
	if (b <= a && b <= c){ min = b; }
	if (c <= b && c <= a){ min = c; }
	printf("The maxium is:%d.\n",max);
	printf("The minium is:%d.\n",min);
	for (i = 1; i <= 5; i++){ printf("\n"); }
	//2.24
	printf("Please enter one interger:");
	scanf_s("%d", &a);
	if (a % 2 == 1){ printf("it is odd"); }
	else{ printf("it is even"); }
	for (i = 1; i <= 5; i++){ printf("\n"); }
	//2.25
	printf("PPPPPPPPP\n");
	for (i = 1; i <= 3; i++){ printf("    P   P\n"); }
	printf("     PP \n");
	printf("\n");
	printf("  JJ     \n");
	printf(" J       \n");
	printf("J        \n");
	printf(" J       \n");
	printf("  JJJJJJJ\n");
	printf("\n");
	printf("DDDDDDDDD\n");
	printf("D       D\n");
	printf("D       D\n");
	printf(" D     D\n");
	printf("  DDDDD\n");
	for (i = 1; i <= 5; i++){ printf("\n"); }
	//2.26
	printf("Please enter two intergers: ");
	scanf_s("%d%d", &a, &b);
	if (a%b == 0){ printf("%d is a multiple of the %d",a ,b); }
	else{ printf("%d is not a multiple of the %d",a ,b);}
	for (i = 1; i <= 5; i++){ printf("\n"); }
	//2.27
	for (i = 1; i <= 5; i ++)
	{
		for (b = 4; b >= i; b--){
			printf(" ");
		}
			for (a = 1; a <= i*2-1; a++){
				printf("*");
			}

			printf("\n");
		
	}

	system("pause");
	return 0;
}