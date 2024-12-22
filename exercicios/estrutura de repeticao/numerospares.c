// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
/*
2. Números Pares
Escreva um programa que exibe todos 
os números pares de 1 a 100.
*/
int main() {
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    

    return 0;
}
