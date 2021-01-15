#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nama[20]; //buatlah variabel ‘nama’ bertipe data string dengan panjang data sebesar 100
	int umur;
	printf("Masukkan nama : ");
	scanf("%[^\n]s", nama);
	fflush(stdin);
	printf("Masukkan umur : ");
	scanf("%[^\n]d", umur);
	fflush(stdin);
	/* buatlah perintah printf yang akan mencetak text “Masukkan umur :” dan perintah scanf untuk menginput nilai ke dalam variabel umur*/

	FILE *out = fopen("test.txt", "w");	 /*tulis fungsi untuk membuka file*/
	fprintf(out, "%s %d\n", nama, umur); /*gunakan fungsi untuk mencetak string yang diformat ke file*/
	fclose(out);						 /* tulis fungsi untuk menutup file*/
	printf("Sukses menambah data");		 /* buatlah perintah printf yang akan mencetak text "Sukses menambah data."*/
	getchar();
	return 0;
}