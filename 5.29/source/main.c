#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main(void)
{
	int a, b;

	printf("�п�J2�ӼƦr :");
	scanf("%d%d", &a, &b);
	printf("�o2�Ƥ��̤p�����Ƭ� : %d\n", LCM(a,b));

	system("pause");
	return 0;
}

int GCD(int a, int b) {
	 while ((a %= b) && (b %= a));
	return a + b;
}
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}