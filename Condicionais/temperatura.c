// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida

/*Exercicio
leia uma matriz densa de um arquivo, calcule e imprima a soma dos valores de cada linha e de cada coluna
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
 float temperatura,c,f,k;
 char escala;
  scanf("%f %c", &temperatura, &escala);


  switch (escala)
  {
  case 'C':
    c=temperatura;
    f= (c * 1.8)+32;
    k = c + 273.15;
    printf("Celsius: %.2lf\nFarenheit: %.2lf\nKelvin: %.2lf",c,f,k);
    
    break;
  case 'F':
    f= temperatura;
    c=(f-32)/1.8;
    k = c + 273.15;
    printf("Celsius: %.2lf\nFarenheit: %.2lf\nKelvin: %.2lf",c,f,k);
    break;

    case 'K':
    k= temperatura;
    c=k-273.15;
    f= (c*1.8)+32;
    printf("Celsius: %.2lf\nFarenheit: %.2lf\nKelvin: %.2lf",c,f,k);
    break;
  default:
  printf("ERRADO 404");
    break;
  }

  return 0;
}