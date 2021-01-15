#include <stdio.h>
#include <string.h>/* untuk menggunakan fungsi strcpy() */

enum JenisKelamin
{
	pria,
	wanita
}; /* Definisikan enumerasi yang bernama JenisKelamin dengan isi konstanta pria dan wanita*/

int main(void)
{

	char nama[50]; /* Deklarasikan variabel nama bertipe string, dengan panjang data sebesar 25 */

	enum JenisKelamin gender; /* Deklarasikan variabel gender yang bertipe JenisKelamin */

	strcpy(nama, "Santi"); /* Mengisikan nilai ke dalam variabel nama dan gender */
	gender = wanita;

	printf("Nama : %s\n", nama);
	printf("Jenis kelamin : %d", gender); /* Menampilkan nilai yang disimpan di dalam variabel nama 
         dan gender menggunakan perintah printf*/

	return 0;
}