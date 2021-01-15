#include <stdio.h>
int main()
{
	int a, b, c, d, e, max;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	printf("masukkan bilangan pertama : %d \n", a);

	printf("masukkan bilangan kedua : %d \n", b);

	printf("masukkan bilangan ketiga : %d \n", c);

	printf("masukkan bilangan keempat : %d \n", d);

	printf("masukkan bilangan kelima : %d \n", e);

	if ((a > b) && (a > c) && (a > d) && (a > e))
	{
		max = a;
	}
	else if ((a < b) && (b > c) && (b > d) && (b > e))
	{

		max = b;
	}
	else if ((c > a) && (b < c) && (c > d) && (c > e))
	{

		max = c;
	}
	else if ((d > a) && (d > b) && (d > c) && (d > e))
	{

		max = d;
	}
	else
	{
		max = e;
	}

	printf("\n");
	printf("Bilangan terbesar adalah %i\n", max);

	if (max > 0)
	{
		printf("Bilangan tersebut adalah bilangan positif(+)");
	}
	else
	{
		printf("Bilangan tersebut adalah bilangan negatif(-)");
	}
}
