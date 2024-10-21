// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3){
    float media;

    switch (tipo){
    case 'A':
    media= (n1 + n2 + n3)/3;
    return media;
        
        break;

    case 'P':
    media= ( (n1*4)+(n2*5)+(n3*6) )/15;
    return media;

        break;
    }

}

int main() {
    float n1,n2,n3,media;
    char tipo;
    scanf("%c %f %f %f",&tipo,&n1,&n2,&n3);
    media= calculaMedia(tipo,n1,n2,n3);

    printf("Média %.2lf",media);
    
    return 0;
}
