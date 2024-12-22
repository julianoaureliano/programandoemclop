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
#include <ctype.h>
#include <string.h>

int verificaPalindromo(char *str, int inicio, int fim)
{
    while (inicio < fim && !isalnum(str[inicio]))
        inicio++;
    while (inicio < fim && !isalnum(str[fim]))
        fim--;

    if (inicio >= fim)
    {
        return 1;
    }

    if (tolower(str[inicio]) != tolower(str[fim]))
    {
        return 0;
    }
    return verificaPalindromo(str, inicio + 1, fim - 1);
}

// funcao wrapper
int palindromo(char *entrada)
{
    int tamanho = strlen(entrada);
    return verificaPalindromo(entrada, 0, tamanho - 1);
}

int main()
{
    char frase[1000];

    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';
    if (palindromo(frase))
    {
        printf("O texto \"%s\" é palíndromo", frase);
    }
    else
    {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}
