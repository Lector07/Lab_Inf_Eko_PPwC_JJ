#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void zadanie1();

int porownajPola(const void* a, const void* b);

char Sprawdzplec(char przedostatniaCyfra) {
	return (przedostatniaCyfra % 2 == 0) ? 'K' : 'M';
}

int poprawnoscPESEL(char pesel[]) {
	int wagi[] = { 1,3,7,9,1,3,7,9,1,3,1 };
	int suma = 0;

	for (int i = 0; i < 11; i++) {
		suma += (wagi[i] - '0') * wagi[i];
	}

	return (suma % 10 == 0);
}



int main() {
	/*FILE* fp;
	char tekst[] = "Hello world!";
	if ((fp = fopen("test.txt", "w")) == NULL)
	{
		printf("Nie moge otworzyc pliku do zapisu!\n");
		exit(1);
	}
	fprintf(fp, "%s", tekst);
	fclose(fp);*/

	/*FILE* fp;
	char filename[12];
	int inChar;
	printf("Podaj nazwe pliku: \n");
	getc(filename);
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("\n\n!! plik nie istnieje!!\n");
			exit(1);
	}
	inChar = getc(fp);
	while (inChar != EOF)
	{
		putchar(inChar);
		inChar = getc(fp);
	}
	fclose(fp);*/

	/*FILE* fileInput = fopen("zad2.txt", "r");
	FILE* fileOutput = fopen("wynik2.txt", "w");

	if (fileInput == NULL) {
		printf("Nie mozna otworzyc pliku!!\n");
		return 1;
	}

	if (fileOutput == NULL)
	{
		printf("Nie mozna otworzyc pliku do zapisu!!\n");
		return 1;
	}

	int liczba;
	while (fscanf(fileInput, "%d", &liczba) == 1) {
		int cyfraJednosci = liczba % 10;
		if (cyfraJednosci == 0 || cyfraJednosci == 3 || cyfraJednosci == 8 || cyfraJednosci == 9)
		{
			fprintf(fileOutput, "%d\n", liczba);
		}
	}
	fclose(fileInput);
	fclose(fileOutput);*/

	/////zad3
	FILE* plikDane = fopen("dane.txt", "r");
	FILE* plikZapis = fopen("wynik3.txt", "w");

	if (plikDane == NULL || plikZapis == NULL) {
		printf("!!!!!!!Blad!!!!!!!!");
		return 1;
	}

	char pesel[12];
	int liczbaKobiet = 0;
	int liczbaMezcyzn = 0;
	int liczbaListopad = 0;

	fprintf(plikZapis, "4.1\n");

	while (fscanf(plikDane, "%s", pesel) == 1) {
		char przedostatniaCyfra = pesel[9];
		char plec = Sprawdzplec(przedostatniaCyfra);

		if (plec == 'K') {
			liczbaKobiet++;
		}
		else {
			liczbaMezcyzn++;
		}
		fprintf(plikZapis, "%s\n", pesel);
	}

	fprintf(plikZapis, "Liczba kobiet: %d\n", liczbaKobiet);
	fprintf(plikZapis, "Liczba mezczynz: %d\n", liczbaMezcyzn);

	rewind(plikDane);

	fprintf(plikZapis, "4.2\n");

	while (fscanf(plikDane, "%s", pesel) == 1) {
		int miesiac = (pesel[2] - '0') * 10 + (pesel[3] - '0');

		if ((miesiac == 11) || miesiac == 31) {
			liczbaListopad++;
		}
	}

	fprintf(plikZapis, "Liczba osob urodzonych w listopadzie: %d\n", liczbaListopad);

	rewind(plikDane);

	fprintf(plikZapis, "4.3\n");

	while (fscanf(plikDane, "%s", pesel) == 1) {
		if (!poprawnoscPESEL(pesel)) {
			fprintf(plikZapis, "%s\n", pesel);
		}
	}

	fclose(plikDane);
	fclose(plikZapis);

	return 0;
}

//void zadanie1() {
//	FILE* fileinput = fopen("promienie.txt", "r");
//
//	if (fileinput == NULL)
//	{
//		printf("Nie mozna otworzyc pliku!!\n");
//		return 1;
//	}
//	double promien1, promien2;
//	fscanf(fileinput, "%lf %lf", &promien1, &promien2);
//
//	fclose(fileinput);
//
//	double pole1 = 3.141592 * promien1 * promien1;
//	double pole2 = 3.141592 * promien2 * promien2;
//
//	double pola[2] = { pole1, pole2 };
//	qsort(pola, 2, sizeof(double), porownajPola);
//
//	FILE* fileOutput = fopen("wynik.txt", "w");
//	if (fileOutput == NULL)
//	{
//		printf("Nie mozna otworzyc pliku!!\n");
//		return 1;
//	}
//	fprintf(fileOutput, "Pole kola o promieniu %2lf\n", promien1, pola[0]);
//	fprintf(fileOutput, "Pole kola o promieniu %2lf\n", promien2, pola[1]);
//	
//	fclose(fileOutput);
//}
//
//int porownajPola(const void* a, const void* b) {
//	const double* p1 = (const double*)a;
//	const double* p2 = (const double*)b;
//
//	if (*p1 < *p2) return -1;
//	else if (*p1 > *p2) return 1;
//	else return 0;
//
//}




