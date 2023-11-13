#include <stdio.h>

int main() {
    int intA, a, b;

    printf("-=-=-=-=KALKULATOR=-=-=-=-\n");
    printf("Wybierz dzialanie:\n");
    printf("1. Suma\n");
    printf("2. Roznica\n");
    printf("3. Iloczyn\n");
    printf("4. Iloraz\n");
    printf("5. Zamknij\n\n");
    scanf_s("%d", &intA);

    printf("Podaj pierwsza liczbe: ");
    scanf_s("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf_s("%d", &b);

    switch (intA) {
    case 1:
        printf("%d\n", a + b);
        break;
    case 2:
        printf("%d\n", a - b);
        break;
    case 3:
        printf("%d\n", a * b);
        break;
    case 4:
        if (b != 0) {
            printf("%d\n", a / b);
        }
        else {
            printf("Liczba nie moze byc zerem!\n");
        }
        break;
    case 5:
        break;
    default:
        printf("Nie rozpoznano polecenia\n");
        break;
    }

    return 0;
}



