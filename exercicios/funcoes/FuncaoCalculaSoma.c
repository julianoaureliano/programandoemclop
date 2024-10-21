// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
/*
1. Função para Calcular a Soma
Escreva uma função chamada soma que recebe dois números 
inteiros como parâmetros e retorna a soma deles.
*/

int soma(int a, int b){
    return (a+b);
}

int main() {
    int a,b;
    printf("Digite um numero:1 ");
    scanf("%d",&a);
    printf("Digite um numero:2 ");
    scanf("%d",&b);


printf("A soma dos dois numeros sao: %d",soma(a,b));
    

    return 0;
}
