// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>

int velocidadelesma(int a){
    if(a<10){
        return 1;
    }else if(a>=10 && a<20){
        return 2;
    }else if(a>=20){
        return 3;
    }

}

int main() {
    int n,level=0,lesma,maiorlevel=0;

    scanf("%d",&n);
    for (int i = 0; i < n; i++) {

        scanf("%d",&lesma);
        level = velocidadelesma(lesma);
        if(level>maiorlevel){
            maiorlevel=level;
        }
    }

    printf("Level %d",maiorlevel);

    return 0;
}
