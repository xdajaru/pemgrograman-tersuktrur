#include <stdio.h>
#include <stdlib.h>
int main()
{
	int bil = 1;
	int hasil = 10;

	printf("Deret 10 bilangan kuadrat pertama : ");

	do
	{

		printf("%d\t ", bil * bil);
		bil = bil + 1;
	} while (bil <= hasil);

	return 0;
}
