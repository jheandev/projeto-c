#include <stdio.h>

int main()
{

    float metros, centimetros, milimetros, decimetros;

    printf("quantidade de metros");
    scanf("%f", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("quantidade em decimetros:%f\n", decimetros);
    printf("quantidade em centimetros:%f\n", centimetros);
    printf("quantidade em milimetros:%f\n", milimetros);

    return (0);
}