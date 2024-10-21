// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
/*
4. Fatorial
Escreva um programa que calcula o fatorial 
de um número fornecido pelo usuário.
*/
int main() {
    int numero,fatorial;
    fatorial=1;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    for(int i=1;i<=numero;i++){
        fatorial = fatorial *i;
    }   
    printf("Fatorial de %d é: %d",numero,fatorial);
    

    return 0;
}
