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
