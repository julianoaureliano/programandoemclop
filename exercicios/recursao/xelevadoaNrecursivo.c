
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
implemente uma função recursiva que dados dois numeros interios x e n,
calcula e retorne o valor de x elevado a n,
*/
int potencia(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * potencia(x, n - 1);
    }
}

int main()
{
    int n, x;
    printf("Digite o valor dex e para n: ");
    scanf("%d %d", &n, &x);

    printf("resultado de %d elevado a %d : %d", x, n, potencia(x, n));

    return 0;
}