#include <stdio.h>
#include <stdlib.h>

int main(){

    int base, altura, mult;

    printf("Digite a base do quadrado:");
    scanf("%d", &base);

    printf("\nA altura:");
    scanf("%d", &altura);

    mult = base * altura;

    printf("\nA base: %d a altura: %d: e a multiplicacao e: %d", base, altura, mult);

    return 0;

}
