#include <stdio.h>

union Lingkaran
{
	float Keliling;
	double Luas;
} Lingkaran;
/* Definisikan union dengan isi data
    Keliling bertipe data float
    Luas bertipe data double
    deklarasikan union dengan nama Lingkaran*/

int main()
{
	float JariJari; /* Deklarasikan variabel JariJari bertipe float */

	printf("Masukkan Jari-jari Lingkaran : ");
	scanf("%f", &JariJari);

	Lingkaran.Keliling = 2 * 3.14 * JariJari; /* Tuliskan rumus keliling lingkaran */
	printf("Maka Keliling Lingkaran = %f\n", Lingkaran.Keliling);

	Lingkaran.Luas = 3.14 * JariJari * JariJari; /* Tuliskan rumus luas lingkaran */
	printf("Maka Luas Lingkaran = %f", Lingkaran.Luas);
}