#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int bilangan[5] = {6, 9, -8, 24, -99};
	/* deklarasikan array dimensi 1 dengan ketentuan 
tipe data = integer
nama array = bilangan
ukuran = 5
elemen array = 6, 9, -8, 24, -99 */

	char hari[7][7] = {"senin",
					   "selasa",
					   "rabu",
					   "kamis",
					   "jumat",
					   "sabtu",
					   "minggu"};

	//...../* deklarasikan array multi dimensi dengan ketentuan
	//tipe data = char
	//nama array = hari
	//kuran = baris:7 dan kolom:7
	//elemen array = nama-nama hari dalam sepekan */

	int i;

	printf("Isi array bilangan pertama: %d \n", bilangan[0]);
	printf("Isi array bilangan kedua: %d \n", bilangan[1]);
	printf("Isi array bilangan ketika: %d \n", bilangan[2]);
	printf("Isi array bilangan keempat: %d \n", bilangan[3]);
	printf("Isi array bilangan kelima: %d \n", bilangan[4]);
	;
	printf("\n");
	//.....//buatlah perintah printf untuk mencetak "Hari dalam sepekan”
	printf("Hari dalam sepekan\n");
	for (i = 0; i < 7; i++)
	{
		printf("Hari % d: % s\n ", i + 1, hari[i]);
	}
}