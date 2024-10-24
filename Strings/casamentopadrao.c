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

#define TEXTO_MAX 1000
#define MAX_PADRAO 100

int verificar_o_padrao(char c, const char *padrao)
{
    for (int i = 0; padrao[i] != '\0'; i++)
    {
        if (padrao[i] == c)
        {
            return 1; // achei
        }
    }
    return 0; // nao achei
}

void procurar_padrao(const char *texto, const char *padrao)
{
    int tam_texo = strlen(texto);
    int tam_padrao = strlen(padrao);
    int opa = 0;

    for (int i = 0; i <= tam_texo - tam_padrao;)
    {
        int casa = 1;
        int j;
        // Comparaçao do padrao com o texto
        for (j = 0; j < tam_padrao; j++)
        {
            printf("%c ", texto[i + j]);

            if (texto[i + j] != padrao[j])
            {
                casa = 0;
                break;
            }
        }

        if (casa)
        {
            printf("sim\n");
            printf("Achei o padrão no índice %d\n", i);
            opa = 1;
            break;
        }
        else
        {
            printf("não\n");
        }
        if (j < tam_padrao && !verificar_o_padrao(texto[i + j], padrao))
        {
            i++;
        }
        else
        {
            i++;
        }
    }
    if (!opa)
    {
        printf("Não achei o padrão\n");
    }
}

int main()
{
    char texto[TEXTO_MAX];
    char padrao[MAX_PADRAO];

    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;

    fgets(padrao, sizeof(padrao), stdin);
    padrao[strcspn(padrao, "\n")] = 0;

    procurar_padrao(texto, padrao);

    return 0;
}
