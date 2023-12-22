#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
	////Zad1
	//int tablicaZ1[10];
	//int n = 3;

	//for (int i = 0; i < 10; i++) {
	//	tablicaZ1[i] = n;
	//	n = n + 3;
	//	printf("%d\n", tablicaZ1[i]);
	//}

	//zad 2
	//int tablicaZ2[10];
	//int n = 3;

	//for (int i = 0; i < 10; i += 2) {
	//	tablicaZ2[i] = n;
	//	n = n + 6;
	//	printf("%d\n", tablicaZ2[i]);

	//}


	//zad3
	//int n, x = 0;
	//
	//printf("Podaj liczbe: ");
	//scanf_s("%d", &n);
	//
	//int tablicaN[30];
	//int length = sizeof(tablicaN) / sizeof(tablicaN[0]);

	//for (int i = length - 1; i >= 0; i--) {
	//	tablicaN[i] = n - x;
	//	x += 5;
	//	printf("%d ", tablicaN[i]);
	//}

	//zad4
	//srand(time(NULL));
	//int minimum = 0;
	//int tablicaZAD4[10];

	//for (int i = 0; i < 10; i++) {
	//	tablicaZAD4[i] = rand() % 73 - 23;

	//	if (minimum > tablicaZAD4[i])
	//		minimum = tablicaZAD4[i];

	//	printf("%d ", tablicaZAD4[i]);

	//}
	//printf("\n");
	//printf("%d ", minimum);

	//zad5
	/*int n, b = 0;
	printf("Podaj dwie pierwsze wartosci tablicy: ");
	scanf_s("%d %d", &n, &b);

	int liczba_elementow = 0;
	printf("Podaj liczbe elementow tablicy (minimum 2): ");
	scanf_s("%d", &liczba_elementow);

	int* tablica = (int*)malloc(liczba_elementow * sizeof(int));

	tablica[0] = n;
	tablica[1] = b;

	for (int i = 2; i < liczba_elementow; i++) {
		tablica[i] = tablica[i - 1] + tablica[i - 2];
	}

	printf("Zawartosc tablicy:\n");
	for (int i = 0; i < liczba_elementow; i++) {
		printf("%d\n", tablica[i]);
	}

	free(tablica);*/

	//zad6
	/*int tablicaZAD6[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 0;

	for (int i = 10; i < 20; i++) {

		tablicaZAD6[i] = tablicaZAD6[n];
		n = n + 1;

	}

	for (int i = 0; i < 20; i++){
		printf("%d ", tablicaZAD6[i]);
	}*/

	//zad7
	/*int tablica2D[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int suma = 0;

	for (int i = 0; i < 3; i++) {
		suma += tablica2D[i][i];
	}
	printf("%d", suma);*/
	


	return 0;
}