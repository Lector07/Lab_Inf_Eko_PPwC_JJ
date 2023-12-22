#include <stdio.h>

//zad 1
//int silnia(int n) {
//    if (n == 0 || n == 1)
//        return 1;
//    else
//        return n * silnia(--n);
//}

//zad2
//int ciag(int n) {
//    if (n == 1)
//        return -1;
//    else if (n == 2)
//        return 1;
//    else
//        return ciag(n - 1) * ciag(n - 2);
//}

//zad4
//int wynik(int i) {
//    if (i < 3)
//        return 1;
//    else if (i % 2 == 0)
//        return wynik(i - 3) + wynik(i - 1) + 1;
//    else
//        return wynik(i - 1) % 7;
//}

//zad5
void zamianaZ10Na2(int n) {
    if (n > 1) {
        zamianaZ10Na2(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    //zad 1
    /*int liczba = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("Silnia z liczby ujemnej nie istnieje!\n");
    }
    else {
        printf("Silnia z %d wynosi %d\n", liczba, silnia(liczba));
    }*/

    //zad2
    /*int liczba = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("Wartosc %d-tego wyrazu ciagu wynosi %d\n", liczba, ciag(liczba));*/

    //zad4
    /*int liczba = 0;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("%d", wynik(liczba));*/

    //zad5
    int liczba = 0;

    printf("Podaj liczbe do zamiany: ");
    scanf("%d", &liczba);

    printf("Liczba %d w systemie 2 to: ", liczba);
    zamianaZ10Na2(liczba);
    printf("\n");
    
    return 0;
}
