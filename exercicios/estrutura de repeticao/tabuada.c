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
/*
1. Tabuada
Escreva um programa que imprime a tabuada de um número 
fornecido pelo usuário, de 1 a 10.
*/
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",numero,i,(numero*i));
    }
    

    return 0;
}
