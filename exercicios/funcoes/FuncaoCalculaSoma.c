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
1. Função para Calcular a Soma
Escreva uma função chamada soma que recebe dois números 
inteiros como parâmetros e retorna a soma deles.
*/

int soma(int a, int b){
    return (a+b);
}

int main() {
    int a,b;
    printf("Digite um numero:1 ");
    scanf("%d",&a);
    printf("Digite um numero:2 ");
    scanf("%d",&b);


printf("A soma dos dois numeros sao: %d",soma(a,b));
    

    return 0;
}
