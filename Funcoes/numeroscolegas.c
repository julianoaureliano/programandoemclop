// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>
#include <stdlib.h>//para usar o abs que é o modulo

int somarDivisores(int numero){

    int divisores=0;

    for(int i=1;i < numero;i++){

        if((numero%i) == 0){
            
            divisores = divisores + i;
        }

    }
    return divisores;
}
void colegaounao(int da, int db,int a, int b){
    if( abs(da-b)<=2 && abs(db-a)<=2  ){
        printf("S");
    }else{
        printf("N");
    }

}

int main() {
    int a,da,b,db;
    scanf("%d %d",&a,&b);
    
    da=somarDivisores(a);
    
    db=somarDivisores(b);
    
    colegaounao(da,db,a,b);
    
    return 0;
}
