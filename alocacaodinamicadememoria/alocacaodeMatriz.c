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

int **createMatrix(int nlin, int ncol)
{
    int **mat = (int **)malloc(nlin * sizeof(int *));
    if (mat == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    for (int i = 0; i < nlin; i++)
    {
        mat[i] = (int *)malloc(ncol * sizeof(int));
        if (mat[i] == NULL)
        {
            printf("Erro ao alocar memória.\n");
            exit(1);
        }
    }
    return mat;
}

void readMatrix(int **mat, int nlin, int ncol)
{
    for (int i = 0; i < nlin; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printiMatrix(int **mat, int nlin, int ncol)
{
    for (int i = 0; i < nlin; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void destroyMatrix(int **mat, int nlin)
{
    for (int i = 0; i < nlin; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

int main()
{
    int lin, col;
    scanf("%d %d", &lin, &col);
    int **mat = createMatrix(lin, col);
    readMatrix(mat, lin, col);
    printiMatrix(mat, lin, col);
    destroyMatrix(mat, lin);
    mat = NULL;
    printf("OK\n");

    return 0;
}
