#include <stdio.h>

struct data
{
	char nama[50];
	char npm[10];
	float ipk;
}; /* Definisikan strukur yang bernama 'data' dengan isi data
    nama bertipe data string, panjang data 50
    npm bertipe data string, panjang data 10
    ipk bertipe float*/

int main()
{
	struct data mhs; /* Deklarasikan variabel struct data dengan nama mhs */

	//Lengkapi sintaks scanf
	printf("Masukkan NAMA : ");
	scanf("%s", &mhs.nama);
	printf("Masukkan NPM : ");
	scanf("%s", &mhs.npm);
	printf("Masukkan IPK : ");
	scanf("%f", &mhs.ipk);
	printf("----------\n");

	printf("NAMA MAHASISWA: %s\n", mhs.nama);
	printf("NPM MAHASISWA: %s\n", mhs.npm);
	printf("BESAR IPK : %g", mhs.ipk);
	/* Menampilkan nilai yang disimpan di dalam variabel nama, npm dan ipk menggunakan perintah printf*/

	return 0;
}