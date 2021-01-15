
#include <stdio.h>

void main()
{

	char nama[] = "Universitas Gunadarma";
	char universitas[30];
	char lokasi[] = " Depok";
	int panjang_nama;

	//... //tulis perintah untuk copy string nama ke string universitas
	strcpy(universitas, nama);
	//maka sekarang universitas akan berisi:
	printf("string universitas: %s\n", universitas);
	strcat(universitas, lokasi);
	//... // tulis perintah untuk menggabungkan string universitas dan string lokasi
	printf("isi dari string universitas: %s\n", universitas);
	strlen(nama);
	//... // tulis perintah untuk menghitung panjang karakter dari string nama
	printf("Panjang string nama: %d karakter\n", strlen(nama));
}