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
#include <stdlib.h>

#define MAX_NOME 100
#define MAX_PESSOAS 100

typedef struct
{
    char nome[MAX_NOME];
} Pessoa;

int pessoaExiste(Pessoa lista[], int total, char nome[])
{
    for (int i = 0; i < total; i++)
    {
        if (strcmp(lista[i].nome, nome) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int N;
    Pessoa lista[MAX_PESSOAS];
    int totalPessoas = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char comando[10], nome[MAX_NOME];

        // Lendo o comando
        scanf("%s", comando);

        if (strcmp(comando, "INSERIR") == 0)
        {
            scanf(" %[^\n]", nome);

            if (!pessoaExiste(lista, totalPessoas, nome))
            {
                strcpy(lista[totalPessoas].nome, nome);
                totalPessoas++;
            }
        }
        else if (strcmp(comando, "REMOVER") == 0)
        {
            scanf(" %[^\n]", nome);

            for (int j = 0; j < totalPessoas; j++)
            {
                if (strcmp(lista[j].nome, nome) == 0)
                {
                    for (int k = j; k < totalPessoas - 1; k++)
                    {
                        strcpy(lista[k].nome, lista[k + 1].nome);
                    }
                    totalPessoas--;
                    break;
                }
            }
        }
        else if (strcmp(comando, "IMPRIMIR") == 0)
        {
            printf("Atualmente trabalhando:\n");
            for (int j = 0; j < totalPessoas; j++)
            {
                printf("%s\n", lista[j].nome);
            }
        }
    }

    return 0;
}