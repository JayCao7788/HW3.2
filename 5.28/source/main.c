#include "stdlib.h"
#include "stdio.h"

int main(void) 
{
	char word;

	printf("�п�J�r�� : ");
	scanf("%c", &word);


	printf("���r�����ۤϤj�p�g : ");
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