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
#include <stdbool.h>

#define N 9

bool podeColocar(int sudoku[N][N], int linha, int coluna, int num)
{
    for (int x = 0; x < N; x++)
    {
        if (sudoku[linha][x] == num)
        {
            return false;
        }
    }

    for (int x = 0; x < N; x++)
    {
        if (sudoku[x][coluna] == num)
        {
            return false;
        }
    }

    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sudoku[inicioLinha + i][inicioColuna + j] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool resolverSudoku(int sudoku[N][N], int linha, int coluna)
{
    if (linha == N - 1 && coluna == N)
    {
        return true;
    }

    if (coluna == N)
    {
        linha++;
        coluna = 0;
    }

    if (sudoku[linha][coluna] != 0)
    {
        return resolverSudoku(sudoku, linha, coluna + 1);
    }

    for (int num = 1; num <= 9; num++)
    {
        if (podeColocar(sudoku, linha, coluna, num))
        {
            sudoku[linha][coluna] = num;

            if (resolverSudoku(sudoku, linha, coluna + 1))
            {
                return true;
            }
            sudoku[linha][coluna] = 0;
        }
    }

    return false;
}

void imprimirSudoku(int sudoku[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", sudoku[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int sudoku[N][N];
    char entrada[N][N + 1];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", entrada[i]);
        for (int j = 0; j < N; j++)
        {
            sudoku[i][j] = (entrada[i][j] == '*') ? 0 : entrada[i][j] - '0';
        }
    }

    if (resolverSudoku(sudoku, 0, 0))
    {
        imprimirSudoku(sudoku);
    }
    else
    {
        printf("Não tem solução!\n");
    }

    return 0;
}
