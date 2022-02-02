#include <stdio.h>

int main()
{

    int num1, num2;
    float media;

    printf("Digite o primeiro numero:");
    scanf("%d", &num1);

    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    media = (num1 + num2) / 2;

    printf("A media e:%f", media);
}
