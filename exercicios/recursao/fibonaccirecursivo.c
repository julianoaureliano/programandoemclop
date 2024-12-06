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

// exemplo: fazer uma função que calcula o enesimo termo da sequencia de fibonacci

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n == 2)
        {
            return 1;
        }
        else
        {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}

int main()
{
    int n;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    printf("o termo é %d: %d", n, fibonacci(n));

    return 0;
}