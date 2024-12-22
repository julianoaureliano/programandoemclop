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
    char nome[200];
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofridos;
    int pontos;
    int numero_de_partidas;
    int saldo_de_gols;
    int total_partidas;
} Time;

void ordenarTimesPorPontos(Time times[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (times[j].pontos < times[j + 1].pontos)
            {
                Time temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }

            else if (times[j].pontos == times[j + 1].pontos && times[j].vitorias < times[j + 1].vitorias)
            {
                Time temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }

            else if (times[j].pontos == times[j + 1].pontos && times[j].vitorias == times[j + 1].vitorias && times[j].saldo_de_gols < times[j + 1].saldo_de_gols)
            {
                Time temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }
        }
    }
}

void formatarTimes(Time times[], int n)
{
    for (int i = 0; i < n; i++)
    {
        times[i].pontos = (times[i].vitorias * 3) + (times[i].empates);
        times[i].total_partidas = times[i].vitorias + times[i].empates + times[i].derrotas;
        times[i].saldo_de_gols = times[i].gols_feitos - times[i].gols_sofridos;
    }
}

void exibirTimes(Time times[], int n)
{
    printf("Tabela do campeonato:\nNome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");
    for (int i = 0; i < n; i++)
    {
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", times[i].nome, times[i].pontos, times[i].total_partidas, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].gols_feitos, times[i].gols_sofridos, times[i].saldo_de_gols);
    }
    printf("\n");
}

void zonadaLibertadores(Time times[], int n)
{
    printf("Times na zona da libertadores:");
    for (int i = 0; i < 6; i++)
    {
        printf("%s", times[i].nome);
    }
    printf("\n");
}

void timesRebaixados(Time times[], int n)
{
    printf("Times rebaixados:");
    for (int i = (n - 1); i > (n - 5); i--)
    {
        printf("%s", times[i].nome);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Time times[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%199[^;];%d %d %d %d %d", times[i].nome, &times[i].vitorias, &times[i].empates, &times[i].derrotas, &times[i].gols_feitos, &times[i].gols_sofridos);
    }

    formatarTimes(times, n);
    ordenarTimesPorPontos(times, n);
    exibirTimes(times, n);
    printf(" \n");
    zonadaLibertadores(times, n);
    printf(" \n");
    timesRebaixados(times, n);

    return 0;
}