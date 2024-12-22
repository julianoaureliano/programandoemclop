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
#include <string.h>

/*
Exercício 5: Comparar Strings
Escreva um programa que leia duas strings do usuário e compare se elas são iguais.

*/

int main()
{
    char str1[100], str2[100];
    int vogais = 0;

    printf("Digite a frase 1: ");
    scanf(" %[^\n]", str1);

    printf("Digite a frase 2: ");
    scanf(" %[^\n]", str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Sao iguais.");
    }
    else
    {
        printf("Nao sao iguais");
    }

    return 0;
}
