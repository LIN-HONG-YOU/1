#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("n=");
	scanf_s("%d", &n);
	
	int j;
	for (j = 1; j <= n; ++j)
	{
	    printf("*");
	}
	printf("\n");

	printf("*");

	for (j = 1; j <= n - 2; ++j)
	{
		printf(" ");
	}
	printf("*\n");

	for (j = 1; j <= n; ++j)
	{
		printf("*");
	}
	printf("\n");

	for (j = 1; j <= 5; j++)
	{
		printf("\n");
	}
	//第二個
	int a;
	printf("   ***   \n");
	printf(" *     *\n");
	for (j = 1; j <= 5; j++)
	{
		printf("*");
		for (a= 1; a<= 7; a++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf(" *     *\n");
	printf("   ***   \n");
	for (j = 1; j <= 5; j++)
	{
		printf("\n");
	}
	//第三個
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	for (j = 1; j <= 6; j++)
	{
		printf("  *  \n");
	}
	for (j = 1; j <= 5; j++)
	{
		printf("\n");
	}
	//第四個
	for (j = 1; j <= 9; j++)
	{
		for (a = 1; a <= 9; a++)
		{
			if (a+j==14||a+j==6||a-j==4||j-a==4){ printf("*"); }
			else printf(" "); 
		}
		printf("\n");
	}



	system("pause");
	return 0;


}