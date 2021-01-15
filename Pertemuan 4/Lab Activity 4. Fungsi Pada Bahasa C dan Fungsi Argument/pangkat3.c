#include <stdio.h>
#include <stdlib.h>

int pangkatTiga(int a);

int main()
{
	int b;

	scanf("%d", &b);
	int jawaban = pangkatTiga(b);
	printf("Fungsi Pangkat 3\n");
	printf("Masukkan sembarang bilangan bulat: %d\n", b);

	printf("%d ^ 3 = %d\n", b, jawaban);
}

int pangkatTiga(int a)
{
	return a * a * a;
}