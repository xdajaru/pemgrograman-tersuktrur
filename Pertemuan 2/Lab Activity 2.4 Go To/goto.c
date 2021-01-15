#include <stdio.h>
int main()
{

	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	printf("masukkan nilai a : %g\n", a );

	/*buatlah perintah printf yang akan mencetak text  "masukkan nilai b : "
dan perintah scanf untuk menginput nilai variabel b*/

	printf("masukkan nilai b :%g \n", b );

	if (b == 0)
	{
		goto tak_terhingga;
	}
	printf("%f dibagi dengan %f adalah %f\n", a, b, a / b);
	goto selesai;
tak_terhingga:
	printf("%f dibagi dengan 0 adalah TAK BERHINGGA\n", a);
selesai:

	return 0;
}
