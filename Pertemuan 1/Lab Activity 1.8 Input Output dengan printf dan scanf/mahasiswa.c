#include <stdio.h>

int main()
{
	char a[10];
	int b;
	char c[10];

	scanf("%s ", &a);
	scanf("%d", &b);
	scanf("%s", &c);
	printf("Nama = %s \n", a);

	printf("NPM = %d \n", b);

	printf("Kelas = %s \n", c);

	printf("Nama %s, NPM %d, Kelas %s", a, b, c);

	return 0;
}