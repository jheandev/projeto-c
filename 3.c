#include <stdio.h>

int main()
{

    char nome[50], sobrenome[50];

    printf("Digite seu nome:\n");
    scanf("%c", &nome);

    printf("Digite seu sobrenome:\n");
    scanf("%c,sobrenome");

    printf("qual seu nome completo: %c %c", nome, sobrenome);
}