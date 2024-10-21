// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
// (Git) git status = para ver as atualizaçoes e mudancas dos arquivos
// *salve o arquivo antes*(Git) git add . = para carregar todos os arquivos para o commit
// (Git) git commit -m "colocarmensagem" = carregar os arquivos para enviar com a mensagem
// (Git) git push origin main = enviar os arquivos atualizados
// (Git) git fetch = "sincroniza" os repositorios, para saber se tem alguma atualização no repositorio
// (Git) git pull origin main = para baixar/atualizar os arquivos locais com o do repositorio do github
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
