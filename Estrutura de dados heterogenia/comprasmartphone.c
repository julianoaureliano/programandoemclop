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
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
} Smartphone;

int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[])
{
    scanf(" %[^\n]", phones[qnt_cadastrada].modelo);
    scanf("%d", &phones[qnt_cadastrada].memoria);
    scanf("%f", &phones[qnt_cadastrada].processador);
    scanf("%f", &phones[qnt_cadastrada].camera);
    scanf("%f", &phones[qnt_cadastrada].bateria);

    return qnt_cadastrada + 1;
}

int pesquisaSmartphones(int qnt_cadastrada, Smartphone phones[], Smartphone reqMin)
{
    int encontrados = 0;
    for (int i = 0; i < qnt_cadastrada; i++)
    {
        if (phones[i].memoria >= reqMin.memoria &&
            phones[i].processador >= reqMin.processador &&
            phones[i].camera >= reqMin.camera &&
            phones[i].bateria >= reqMin.bateria)
        {
            printf("Modelo: %s\n", phones[i].modelo);
            printf("Memoria: %dGB\n", phones[i].memoria);
            printf("Processador: %.2fGhz\n", phones[i].processador);
            printf("Camera: %.2fMPixels\n", phones[i].camera);
            printf("Bateria: %.2fmA\n", phones[i].bateria);
            printf("\n");
            encontrados++;
        }
    }
    return encontrados;
}

int main()
{
    int qnt_cadastrada = 0;
    char continua;
    int encontrados = 0;

    Smartphone phones[100];
    Smartphone reqMin;

    do
    {
        scanf(" %c", &continua);
        if (continua == 's')
        {
            qnt_cadastrada = cadastraSmartphone(qnt_cadastrada, phones);
        }

    } while (continua == 's');

    // requisitos minimos
    scanf("%d", &reqMin.memoria);
    scanf("%f", &reqMin.processador);
    scanf("%f", &reqMin.camera);
    scanf("%f", &reqMin.bateria);

    encontrados = pesquisaSmartphones(qnt_cadastrada, phones, reqMin);
    printf("%d smartphones encontrados.", encontrados);

    return 0;
}