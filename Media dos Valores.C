#include <stdio.h>


int main() 
{

    int soma, r, n1, n2;

    printf("Digite o primeiro valor:");
    scanf("%d", &n1);

    printf ("\nSegundo valor:");
    scanf ("%d", &n2);

    soma = n1 + n2;

    r = soma/3;

    printf ("\nA media de %d e: %d", soma, r);

    return 0;
}
