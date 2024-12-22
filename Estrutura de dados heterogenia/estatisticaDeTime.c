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

typedef struct
{
    char nome[50];
    int golsMarcados;
    int golsSofridos;
} Time;

void ordenarTimesPorGols(Time times[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (times[j].golsMarcados < times[j + 1].golsMarcados)
            {
                Time temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }
        }
    }
}

void exibirTimes(Time times[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d - %s\n", i + 1, times[i].nome);
        printf("Gols marcados: %d\n", times[i].golsMarcados);
        printf("Gols sofridos: %d\n", times[i].golsSofridos);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Time times[n];

    for (int i = 0; i < n; i++)
    {
        getchar();
        fgets(times[i].nome, 50, stdin);
        times[i].nome[strcspn(times[i].nome, "\n")] = '\0';
        scanf("%d", &times[i].golsMarcados);
        scanf("%d", &times[i].golsSofridos);
    }

    ordenarTimesPorGols(times, n);
    exibirTimes(times, n);

    return 0;
}