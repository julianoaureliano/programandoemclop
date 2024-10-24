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

#define TAM_MAX_PALAVRA 101
#define MAX_PREFIXO_SUFIXO 11
#define MAX_PREFIXOS_SUFIXOS 100

// Função para remover o prefixo
void remove_prefixo(char *palavra, char prefixos[][MAX_PREFIXO_SUFIXO], int quantos)
{
    for (int i = 0; i < quantos; i++)
    {
        int len = strlen(prefixos[i]);
        if (strncmp(palavra, prefixos[i], len) == 0)
        {
            memmove(palavra, palavra + len, strlen(palavra) - len + 1);
            return;
        }
    }
}

// Funçao para remover o sufixo
void remove_sufixo(char *palavra, char sufixos[][MAX_PREFIXO_SUFIXO], int suffix_count)
{
    for (int i = 0; i < suffix_count; i++)
    {
        int len = strlen(sufixos[i]);
        int palavra_len = strlen(palavra);
        if (palavra_len >= len && strcmp(palavra + palavra_len - len, sufixos[i]) == 0)
        {
            palavra[palavra_len - len] = '\0';
            return;
        }
    }
}

int main()
{
    int N, M;
    char prefixos[MAX_PREFIXOS_SUFIXOS][MAX_PREFIXO_SUFIXO];
    char sufixos[MAX_PREFIXOS_SUFIXOS][MAX_PREFIXO_SUFIXO];
    char palavra[TAM_MAX_PALAVRA];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", prefixos[i]);
    }

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%s", sufixos[i]);
    }

    while (1)
    {
        scanf("%s", palavra);
        if (strcmp(palavra, "-1") == 0)
        {
            break;
        }

        remove_prefixo(palavra, prefixos, N);

        remove_sufixo(palavra, sufixos, M);

        if (strlen(palavra) > 0)
        {
            printf("%s\n", palavra);
        }
    }

    return 0;
}
