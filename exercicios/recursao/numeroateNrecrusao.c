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

// exemplo: imprimir todos os numeros de n ate 0

void imprimir(int x)
{
    if (x == 0)
    {
        printf("%d ", x);
    }
    else
    {
        printf("%d", x);
        imprimir(x - 1);

        // se for imprimir de 0 ate n é so fazer:
        /*
        imprimir(x - 1);
        printf("%d", x);
        */
    }
}

int main()
{
    int n;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    imprimir(n);
    return 0;
}