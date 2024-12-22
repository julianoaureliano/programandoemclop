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
#include <stdlib.h> //coloquei esta biblioteca para usar o exit(1); e par o programa na hora que der o erro.

#define MAX_MENSAGEM 201
#define TAM_LETRRAS 40

const char s[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                  'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

int indice_vetors(char c)
{
    for (int i = 0; i < TAM_LETRRAS; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int chave_valida(char *K)
{
    if (strlen(K) != 4)
    {
        return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        if (K[i] < '0' || K[i] > '9')
        {
            return 0;
        }
    }
    return 1;
}

// incriptar mensagem p usando a chave k
void incriptar_mensagem(char *P, char *K, char *C)
{
    int tamanho_p = strlen(P);
    for (int i = 0; i < tamanho_p; i++)
    {
        int indice_P = indice_vetors(P[i]);

        if (indice_P == -1)
        {
            printf("Caractere invalido na entrada!\n");
            exit(1);
        }

        int valor_chave = K[i % 4] - '0';

        int indice_C = (indice_P + valor_chave) % TAM_LETRRAS;
        C[i] = s[indice_C];
    }
    C[tamanho_p] = '\0';
}

int main()
{
    char K[5], P[MAX_MENSAGEM], C[MAX_MENSAGEM];

    scanf("%s", K);

    if (!chave_valida(K))
    {
        printf("Chave invalida!\n");
        return 0;
    }

    getchar();

    fgets(P, MAX_MENSAGEM, stdin);

    P[strcspn(P, "\n")] = 0;

    incriptar_mensagem(P, K, C);

    if (C[0] != '\0')
    {
        printf("%s\n", C);
    }

    return 0;
}
