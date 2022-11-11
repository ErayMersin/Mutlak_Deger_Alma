#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	double sayi, sonuc;

	printf("Sayi Gir: ");
	scanf_s("%lf", &sayi);

	sonuc = fabs(sayi);

	printf("Sonuc: %lf", sonuc);
   

	return 0;
  }