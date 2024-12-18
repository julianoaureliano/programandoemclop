#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100
#define MAX_NOME 101

typedef struct
{
    int matricula;
    char nome[MAX_NOME];
    char telefone[MAX_NOME];
} Funcionario;

int main()
{
    int n, i, matricula_busca;
    char busca[10], nome_busca[MAX_NOME];

    scanf("%d", &n);
    Funcionario funcionarios[MAX_FUNCIONARIOS];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &funcionarios[i].matricula);
        getchar();
        fgets(funcionarios[i].nome, MAX_NOME, stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = 0;
        fgets(funcionarios[i].telefone, MAX_NOME, stdin);
        funcionarios[i].telefone[strcspn(funcionarios[i].telefone, "\n")] = 0;
    }

    while (1)
    {
        scanf("%s", busca);

        if (strcmp(busca, "FINAL") == 0)
        {
            break;
        }

        if (strcmp(busca, "MAT") == 0)
        {
            scanf("%d", &matricula_busca);
            int encontrado = 0;
            for (i = 0; i < n; i++)
            {
                if (funcionarios[i].matricula == matricula_busca)
                {
                    printf("%d\n", funcionarios[i].matricula);
                    printf("%s\n", funcionarios[i].nome);
                    printf("%s\n", funcionarios[i].telefone);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
            {
                printf("informacao nao encontrada\n");
            }
        }
        else if (strcmp(busca, "NOME") == 0)
        {
            getchar();
            fgets(nome_busca, MAX_NOME, stdin);
            nome_busca[strcspn(nome_busca, "\n")] = 0;

            int encontrado = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(funcionarios[i].nome, nome_busca) == 0)
                {
                    printf("%d\n", funcionarios[i].matricula);
                    printf("%s\n", funcionarios[i].nome);
                    printf("%s\n", funcionarios[i].telefone);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
            {
                printf("informacao nao encontrada\n");
            }
        }
    }

    return 0;
}