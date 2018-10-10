#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a ,b, c,i;
	printf("number  square  cube\n");
	
		for (a = 0; a <= 10; a++){
			b = a*a;
			c = a*a*a;
			printf("%d", a);
			printf("\t");
			printf("%d", b);
			printf("\t");
			printf("%d", c);
			printf("\n");
			
		}
	
	system("pause");
	return 0;
}