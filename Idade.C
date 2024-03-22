#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade, sub, ano=2024;

    printf ("Digite sua idade:");
    scanf ("%d", &idade);

    sub = ano - idade;

    printf ("\nVoce nasceu em: %d", sub);

    return 0;
}
