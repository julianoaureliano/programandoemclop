
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

#define TAM 100
#define MAX_TEXTO 101

void carrega_base(int posicao, char base[][MAX_TEXTO]){
    int tamanho;

    fgets(base[posicao], MAX_TEXTO, stdin);

    tamanho = strlen(base[posicao]);

    if (tamanho > 0 && base[posicao][tamanho-1] == '\n') {
        base[posicao][tamanho-1] = '\0';
    }
}

void imprime_sugestoes(char* str, int tamanho, char base[][MAX_TEXTO]){
    int tam_sugestao, sugestoes = 0;

    tam_sugestao = strlen(str); 

    for(int i = 0; i < tamanho; i++){
        int sugerir = 1;
        int tam_atual = strlen(base[i]);

        if(tam_atual < tam_sugestao)
            continue;

        for(int j = 0; j < tam_sugestao; j++){
            if(str[j] != base[i][j]){
                sugerir = 0;
                break;
            }
        }

        if(sugerir){
            printf("Você quis dizer: %s?\n", base[i]);
            sugestoes++;
        }
    }

    if(sugestoes == 0) 
        printf("Sem recomendações\n");
}

int main() {
    char consultas[TAM][MAX_TEXTO] = {0};
    char entrada[MAX_TEXTO]; 

    int anteriores, novas;

    scanf("%d", &anteriores); 

    for(int i = 0; i < anteriores; i++)
        carrega_base(i, consultas);

    scanf("%d", &novas); 

    for(int i = 0; i < novas; i++){
        fgets(entrada, MAX_TEXTO, stdin);

        imprime_sugestoes(entrada, anteriores, consultas);
        printf("\n");
    }

    return 0;
}
