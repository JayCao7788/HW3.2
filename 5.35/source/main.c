# include <stdlib.h>
# include <stdio.h>

unsigned long long Fibonacci();

int main(){

	Fibonacci();

	system("pause");
	return 0;
}


unsigned long long Fibonacci()
{
	unsigned long long n, i, n1, n2, fib, fibbuff, fibbuff2;

	n1 = 0;
	n2 = 1;

	printf("Please enter the value of n : ");
	scanf("%llu", &n);
	
	printf("n1= 0\n");
	printf("n2= 1\n");


	for (i = 3; i < n + 1; i++)	
	{
		fib = n1 + n2;
		//fibbuff2 = fib;
		n1 = n2;
		n2 = fib;	
		//fibbuff = fib;
		
		if (n1 > n2)
		{
			printf("The lagest fibonacci is : %llu", n1);
			printf("\n");
			break;
		}

		printf("n%llu= %llu", i, fib);
		printf("\n");
	}
	
	

}
