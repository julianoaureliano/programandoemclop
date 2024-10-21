// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
/*
5. Fibonacci
Escreva um programa que imprime os primeiros N números da sequência de Fibonacci, 
onde N é informado pelo usuário.
*/
int main() {
    int numero,ante1=1,ante2=0,atual;
    
    printf("Digite o valor de N: ");
    scanf("%d",&numero);
    printf("%d %d ",ante2,ante1);

    for(int i=3;i<=numero;i++){

        atual=ante1+ante2;
        printf("%d ",atual);
        ante2=ante1;
        ante1=atual;    
    }   
    
    

    return 0;
}
