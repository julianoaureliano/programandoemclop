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

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted)
{
    int chapa[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &votes[i]);
    }

    int max_votes = 0, second_max_votes = 0;

    // fiz um vetor para chapa de 1 a 10, e se repetir o numero incrementa
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (votes[j] == i)
            {
                chapa[i - 1]++;
            }
        }
    }

    // ver como fica a chapa: para tirar algumas duvidas de como funciona
    /*
    for (int i = 0; i < 10; i++)
    {
        printf("%d",chapa[i]);
    }
    */

    for (int i = 0; i < 10; i++)
    {
        if (chapa[i] > max_votes)
        {
            second_max_votes = max_votes;
            *second_most_voted = *most_voted;
            max_votes = chapa[i];
            *most_voted = i + 1;
        }
        else if (chapa[i] > second_max_votes)
        {
            second_max_votes = chapa[i];
            *second_most_voted = i + 1;
        }
    }
}

int main()
{
    int n, most_voted = 0, second_most_voted = 0;
    scanf("%d", &n);
    int votes[n];

    compute_votes(n, votes, &most_voted, &second_most_voted);
    printf("%d %d", most_voted, second_most_voted);

    return 0;
}
