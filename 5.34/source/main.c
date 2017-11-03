#include <stdio.h>
#include <stdlib.h>

int intergerPower(int base, int exponent);

int main(void)
{
	int a, b;

	printf("Please input two number : ");
	scanf("%d %d", &a, &b);

	printf(" %d ªº %d ¦¸¤è = %d\n", a, b, intergerPower(a, b));


	system("pause");
	return 0;
}

intergerPower(int base, int exponent)
{	
	
		if (exponent >= 1)
		{
			
			 unsigned long long  result = base*intergerPower(base, exponent - 1);
			 return result;
		}
		else
		{
			return 1;
		}	
}