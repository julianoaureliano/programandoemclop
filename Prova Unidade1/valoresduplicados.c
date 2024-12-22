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

int main()
{
    int vetor1[100], vetor2[100], n, cont = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vetor1[i] == vetor1[j])
            {
                int ja_duplicado = 0;
                for (int k = 0; k < cont; k++)
                {
                    if (vetor2[k] == vetor1[i])
                    {
                        ja_duplicado = 1;
                        break;
                    }
                }
                if (!ja_duplicado)
                {
                    vetor2[cont] = vetor1[i];
                    cont++;
                }
            }
        }
    }

    for (int i = 0; i < cont; i++)
    {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}
