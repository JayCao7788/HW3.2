#include "stdlib.h"
#include "stdio.h"

int main(void) 
{
	char word;

	printf("請輸入字母 : ");
	scanf("%c", &word);


	printf("此字母的相反大小寫 : ");
	if (0x41 <= word && word <= 0x5a)
	{
		printf("%c", word + 0x20);
	}
	else 
	{ 
		printf("%c", word - 0x20);
	}
	printf("\n");
	
	

	system("pause");
	return 0;
}