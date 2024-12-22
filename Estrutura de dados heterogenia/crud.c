// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
// (Git) git status = para ver as atualizaçoes e mudancas dos arquivos
// *salve o arquivo antes*(Git) git add . = para carregar todos os arquivos para o commit
// (Git) git commit -m "colocarmensagem" = carregar os arquivos para enviar com a mensagem
// (Git) git push origin main = enviar os arquivos atualizados.
// (Git) git fetch = "sincroniza" os repositorios, para saber se tem alguma atualização no repositorio
// (Git) git pull origin main = para baixar/atualizar os arquivos locais com o do repositorio do github
#include <stdio.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_ENTRADAS 100

typedef struct
{
    char nome[MAX_NOME];
    int idade;
    char sexo;
} Pessoa;

Pessoa criar(char nome[], int idade, char sexo)
{
    Pessoa novaPessoa;
    strncpy(novaPessoa.nome, nome, MAX_NOME);
    novaPessoa.nome[MAX_NOME - 1] = '\0';
    novaPessoa.idade = idade;
    novaPessoa.sexo = sexo;
    return novaPessoa;
}

int inserir(Pessoa vetor[], int tamanho, Pessoa novaPessoa)
{
    if (tamanho >= MAX_ENTRADAS)
    {
        printf("maximo de entradas\n");
        return tamanho;
    }
    vetor[tamanho] = novaPessoa;
    return tamanho + 1;
}

int deletar(Pessoa vetor[], int tamanho, Pessoa pessoaDeletar)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(vetor[i].nome, pessoaDeletar.nome) == 0 &&
            vetor[i].idade == pessoaDeletar.idade &&
            vetor[i].sexo == pessoaDeletar.sexo)
        {
            // desloca
            for (int j = i; j < tamanho - 1; j++)
            {
                vetor[j] = vetor[j + 1];
            }
            return tamanho - 1;
        }
    }

    return tamanho;
}

void imprimir(Pessoa vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%s,%d,%c\n", vetor[i].nome, vetor[i].idade, vetor[i].sexo);
    }
}

int main()
{
    Pessoa vetor[MAX_ENTRADAS];
    int tamanho = 0;
    char comando;
    char nome[MAX_NOME];
    int idade;
    char sexo;

    while (scanf(" %c", &comando) != EOF)
    {
        if (comando == 'i')
        {
            scanf(" %[^\n]", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);
            Pessoa novaPessoa = criar(nome, idade, sexo);
            tamanho = inserir(vetor, tamanho, novaPessoa);
        }
        else if (comando == 'd')
        {
            scanf(" %[^\n]", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);
            Pessoa pessoaDeletar = criar(nome, idade, sexo);
            tamanho = deletar(vetor, tamanho, pessoaDeletar);
        }
        else if (comando == 'p')
        {
            imprimir(vetor, tamanho);
        }
    }

    return 0;
}
