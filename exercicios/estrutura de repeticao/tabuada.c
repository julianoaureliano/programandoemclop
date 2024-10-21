// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
/*
1. Tabuada
Escreva um programa que imprime a tabuada de um número 
fornecido pelo usuário, de 1 a 10.
*/
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",numero,i,(numero*i));
    }
    

    return 0;
}
