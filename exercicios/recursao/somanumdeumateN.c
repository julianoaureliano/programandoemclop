
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
desenvolva um a funçao recursiva que calcule a soma dos
numeors inteiros de 1 a n.
*/
int somatorio(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n * somatorio(n - 1);
    }
}

int main()
{
    int n;
    printf("Digite o de n: ");
    scanf("%d ", &n);

    printf("a soma de 1 ate %d : %d", n, somatorio(n));

    return 0;
}