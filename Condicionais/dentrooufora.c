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
int x1, x2, y1,y2, n1,n2;
scanf("%d %d %d %d", &x1, &y1,&x2,&y2);
scanf("%d %d",&n1,&n2);

if(n1<=x2 && n1>=x1 && n2<=y2 && n2>=y1 ){
    printf("Dentro!");
    
}else{
    printf("Fora!");
}




  return 0;
}