
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
#include <math.h>

int raizes(double A, double B, double C, double *x1, double *x2)
{
    double delta = B * B - 4 * A * C;

    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *x1 = -B / (2 * A);
        return 1;
    }
    else
    {
        *x1 = (-B + sqrt(delta)) / (2 * A);
        *x2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main()
{
    double A, B, C;
    double x1, x2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A == 0)
    {
        printf("Erro: A não pode ser zero.\n");
        return 1;
    }

    int numeroRaizes = raizes(A, B, C, &x1, &x2);

    printf("%d\n", numeroRaizes);

    if (numeroRaizes == 1)
    {
        printf("%.3lf\n", x1);
    }
    else if (numeroRaizes == 2)
    {
        printf("%.3lf %.3lf\n", x1, x2);
    }

    return 0;
}
