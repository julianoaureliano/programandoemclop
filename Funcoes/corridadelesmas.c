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
