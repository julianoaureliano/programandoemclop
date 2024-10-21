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

int main() {
    int numero, original, reverso = 0, resto;

    scanf("%d", &numero);
    original = numero;

    while (numero > 0) {
        resto = numero % 10;
        reverso = reverso * 10 + resto;
        numero /= 10;
    }

    if (original == reverso) {

    if (original % 2 == 0) {
        printf("%d é Palíndromo e par.\n", original);
    } else {
        printf("%d é Palíndromo e impar.\n", original);
    }

    } else {
        
    if (original % 2 == 0) {
        printf("%d não é Palíndromo e par.\n", original);
    } else {
        printf("%d não é Palíndromo e impar.\n", original);
    }

    }

    return 0;
}
