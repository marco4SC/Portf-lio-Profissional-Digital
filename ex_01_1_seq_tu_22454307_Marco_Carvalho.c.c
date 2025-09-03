#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 float vl1, vl2;
 printf("\ndigite o valor 1:");
 scanf("%f", &vl1),
 printf("\ndigite o valor 2:");
 scanf("%f", &vl2);
 float resultado = vl1+vl2;
 printf("/nA soma dos valores e:%.0f",resultado);
}
