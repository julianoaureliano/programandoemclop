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
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int *array = NULL;
    int size = 0;
    int capacity = 10;
    int num;

    array = (int *)malloc(capacity * sizeof(int));
    if (array == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    while (scanf("%d", &num) != EOF)
    {
        if (size == capacity)
        {
            capacity *= 2;
            array = (int *)realloc(array, capacity * sizeof(int));
            if (array == NULL)
            {
                printf("Erro ao realocar memória.\n");
                return 1;
            }
        }
        array[size++] = num;
    }

    qsort(array, size, sizeof(int), compare);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
