#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int kwadrat(int* x) {
//	*x = (*x) * (*x);
//
//}

int* podanaPotega(int* x, int y) {
	int* wynik = (int*)malloc(sizeof(int));

	*wynik = 1;

	for (int i = 0; i < y; i++) {
		*wynik *= *x;
	}

	return wynik;
}

int main() {
	/*int zmienna;
	printf("Adres zmiennej: %p\n", (void*)&zmienna);

	printf("Podaj wartosc zmiennej: \n");
	scanf("%d\n", &zmienna);

	printf("Adres zmiennej po przypisaniu wartosci: %p\n", (void*)&zmienna);
	printf("Wartosc zmiennej: %d\n", zmienna);*/

	/*int liczba1, liczba2;
	int *wsk1; 
	int *wsk2;

	int roznica;

	printf("Podaj liczbe:\n");
	scanf("%d", &liczba1);

	printf("Podaj liczbe:\n");
	scanf("%d", &liczba2);

	wsk1 = &liczba1;
	wsk2 = &liczba2;

	roznica = *wsk1 - *wsk2;
	printf("Roznica = %d", roznica);*/

	/*int liczba1, liczba2, liczba3;
	int *wsk1, *wsk2, *wsk3;
	double srednia;

	printf("Podaj pierwsza liczbe: \n");
	scanf("%d", &liczba1);

	printf("Podaj druga liczbe: \n");
	scanf("%d", &liczba2);

	printf("Podaj trzecia liczbe: \n");
	scanf("%d", &liczba3);

	wsk1 = &liczba1;
	wsk2 = &liczba2;
	wsk3 = &liczba3;

	srednia = (*wsk1 + *wsk2 + *wsk3) / 3.0;
	printf("Srednia: %.2f", srednia);*/


	//int rozmiar;

	
	//printf("Podaj rozmiar tablicy: ");
	//scanf("%d", &rozmiar);

	//int* tablica = (int*)malloc(rozmiar * sizeof(int));

	//if (tablica == NULL) {
	//	printf("B³¹d alokacji pamiêci.\n");
	//	return 1;  
	//}

	//printf("Adres pierwszego elementu: %p\n", (void*)&tablica[0]);
	//printf("Adres czwartego elementu: %p\n", (void*)&tablica[3]);

	//int min = 0;
	//int max = 0;

	//printf("Podaj zakres minimalny: \n");
	//scanf("%d", &min);

	//printf("Podaj zakres maksymalny: \n");
	//scanf("%d", &max);

	//int* wskmin = 0;
	//int* wskmax = 0;
	//wskmin = min;
	//wskmax = max;

	//srand(time(NULL));

	//printf("Adresy i losowe wartoci tablicy: \n");
	//for (int i = 0; i < rozmiar; i++) {
	//	tablica[i] = rand() % (*wskmax - *wskmin + 1) + *wskmin;
	//	printf("Adres elementu %d: %p, Wartosc: %d\n", i + 1, (void*)&tablica[i], tablica[i]);
	//}
	//free(tablica);

	/*int rozmiar = 0;

	printf("Podaj rozmiar tablicy:\n");
	scanf("%d", &rozmiar);

	int* tablica = (int*)malloc(rozmiar * sizeof(int));

	if (tablica == NULL) {
		printf("Blad alokacji pamieci!\n");
		return 1;
	}

	printf("Podaj elementy tablicy: \n");
	for (int i = 0; i < rozmiar; i++) {
		printf("Element %d: ", i + 1);
		scanf("%d", &tablica[i]);
	}

	double suma = 0;
	for (int i = 0; i < rozmiar; i++) {
		suma += tablica[i];
	}

	double srednia = suma / rozmiar;

	printf("Srednia tablicy: %.2f\n", srednia);

	printf("Elementy wieksze od sredniej:\n");
	for (int i = 0; i < rozmiar; i++) {
		if (tablica[i] > srednia) {
			printf("%d\n", tablica[i]);
		}
	}

	free(tablica);*/


	/*int x = 0;
	
	printf("Podaj liczbe:\n");
	scanf("%d", &x);

	kwadrat(&x);

	printf("Liczba podniesiona do kwadratu: %d", x);*/

	
	int x = 0;
	int y = 0;

	printf("Podaj liczbe:\n");
	scanf("%d", &x);

	printf("Podaj potege:\n");
	scanf("%d", &y);

	int* wynik = podanaPotega(&x, y);

	printf("Liczba %d podniesiona do potegi %d to: %d", x, y, *wynik);

	free(wynik);

	return 0;
}