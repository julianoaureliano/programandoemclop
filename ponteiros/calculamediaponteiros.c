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
#include <locale.h>

void calcular_media(int *a, int *b)
{
    int maior_valor, menor_valor;
    if (*a > *b)
    {
        maior_valor = *a;
        menor_valor = *b;
    }
    else
    {
        maior_valor = *b;
        menor_valor = *a;
    }

    int media, resto;
    media = (maior_valor + menor_valor) / 2;
    if (*a < *b)
    {
        *a = media;
    }
    else
    {
        *b = media;
    }
    resto = (maior_valor + menor_valor) % 2;
    if (*a > *b)
    {
        *a = resto;
    }
    else
    {
        *b = resto;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    scanf("%d %d", &a, &b);
    calcular_media(&a, &b);

    printf("A = %d\nB = %d", a, b);

    return 0;
}
