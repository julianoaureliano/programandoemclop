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
2. Função para Verificar Número Par
Escreva uma função chamada ehPar que recebe um número inteiro 
como parâmetro e retorna 1 se o número for par, ou 0 se for ímpar.
*/

int ehPar(int a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int a;
    printf("Digite um numeropara saber se ele eh par: ");
    scanf("%d",&a);
    


printf("Se for par o numero é 1 se nao eh 0: %d",ehPar(a));
    

    return 0;
}
