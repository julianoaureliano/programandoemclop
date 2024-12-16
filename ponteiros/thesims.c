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

int simula_sims(int *fome, int *sede, int *banheiro, int *sono, int *tedio)
{
    char movimento[100];
    scanf(" %[^\n]", movimento);
    if (*sono <= 0 || *tedio <= 0 || *fome <= 0 || *banheiro <= 0 || *sede <= 0)
    {
        return 0;
    }

    if (strcmp(movimento, "comer") == 0)
    {
        *fome += 30;
        *banheiro -= 15;
        *sono -= 5;
        *tedio -= 5;
        *sede -= 5;

        if (*fome >= 100)
        {
            *fome = 100;
        }
        if (*sede < 0)
        {
            *sede = 0;
        }
    }
    else if (strcmp(movimento, "beber") == 0)
    {
        *sede += 30;
        *banheiro -= 20;
        *fome -= 5;
        *tedio -= 5;
        *sono -= 5;

        if (*sede > 100)
        {
            *sede = 100;
        }
        if (*sede < 0)
        {
            *sede = 0;
        }
    }
    else if (strcmp(movimento, "dormir") == 0)
    {
        *sono += 80;
        *tedio += 30;
        *fome -= 30;
        *banheiro -= 30;
        *sede -= 30;

        if (*sono >= 100)
        {
            *sono = 100;
        }
        if (*tedio >= 100)
        {
            *tedio = 100;
        }
        if (*sede < 0)
        {
            *sede = 0;
        }
    }
    else if (strcmp(movimento, "se aliviar") == 0)
    {
        *banheiro += 100;
        *sono -= 5;
        *tedio -= 5;
        *fome -= 5;
        *sede -= 5;
        if (*banheiro >= 100)
        {
            *banheiro = 100;
        }
        if (*sede < 0)
        {
            *sede = 0;
        }
    }
    else if (strcmp(movimento, "jogar videogame") == 0)
    {
        *sono -= 20;
        *tedio += 80;
        *fome -= 20;
        *banheiro -= 20;
        *sede -= 20;

        if (*tedio >= 100)
        {
            *tedio = 100;
        }
        if (*sede < 0)
        {
            *sede = 0;
        }
        if (*sono <= 0 || *tedio <= 0 || *fome <= 0 || *banheiro <= 0 || *sede <= 0)
        {
            return 0;
        }
    }

    // Verifica se algum valor ficou abaixo de 15
    if (*fome > 0 && *fome <= 15)
    {
        printf("Alerta: fome está com valor baixo\n");
    }
    if (*sede > 0 && *sede <= 15)
    {
        printf("Alerta: sede está com valor baixo\n");
    }
    if (*banheiro > 0 && *banheiro <= 15)
    {
        printf("Alerta: banheiro está com valor baixo\n");
    }
    if (*sono > 0 && *sono <= 15)
    {
        printf("Alerta: sono está com valor baixo\n");
    }
    if (*tedio > 0 && *tedio <= 15)
    {
        printf("Alerta: tédio está com valor baixo\n");
    }

    if (*sono <= 0 || *tedio <= 0 || *fome <= 0 || *banheiro <= 0 || *sede <= 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio)
{
    if (fome <= 0)
    {
        printf("Game Over! Morreu de fome\n");
    }
    if (sede <= 0)
    {
        printf("Game Over! Morreu de sede...\n");
    }
    if (banheiro <= 0)
    {
        printf("Game Over! Morreu apertado...\n");
    }
    if (sono <= 0)
    {
        printf("Game Over! Morreu dormindo...\n");
    }
    if (tedio <= 0)
    {
        printf("Game Over! Morreu deprimido...\n");
    }

    printf("Status final:\n");
    printf("Fome: %d\nSede: %d\nBanheiro: %d\nSono: %d\nTédio: %d\n", fome, sede, banheiro, sono, tedio);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fome, sede, banheiro, sono, tedio;
    int acoes;
    scanf("%d %d %d %d %d", &fome, &sede, &banheiro, &sono, &tedio);
    scanf("%d", &acoes);
    for (int i = 0; i < acoes; i++)
    {
        int ret = simula_sims(&fome, &sede, &banheiro, &sono, &tedio);
        if (ret == 0)
            break;
    }
    imprime_relatorio(fome, sede, banheiro, sono, tedio);
    return 0;
}
