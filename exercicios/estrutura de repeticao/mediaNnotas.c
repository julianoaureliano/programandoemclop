// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
/*
7. Média de N Notas
Escreva um programa que lê N notas 
(onde N é informado pelo usuário) e calcula a média.
*/
int main() {
    int numero;
    float nota,notas=0,media;
    
    printf("Quantas notas voce vai digitar: ");
    scanf("%d",&numero);

    for(int i=1;i<=numero;i++){
        printf("Digite a nota %d: ",i);
        scanf("%f",&nota);
        notas+=nota;
    
    }
    media=notas/numero;
    printf("Media: %.2lf",media);

    
    

    return 0;
}
