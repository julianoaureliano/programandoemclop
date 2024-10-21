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
    int n;
    char letra;

    scanf("%d", &n);
    scanf(" %c", &letra);


    if (n < 2) {
        printf("O número tem que ser maior que 1 para formar o X.\n");
        return 0;
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {

            if (i == j || j == (n - 2 - i)) {
                printf("%c", letra);  

            } else {
                printf(" ");  
            }
        }
        printf("\n");
    }

    return 0;
}
