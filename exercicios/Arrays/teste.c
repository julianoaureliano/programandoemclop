// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
// (Git) git status = para ver as atualizaçoes e mudancas dos arquivos
// *salve o arquivo antes*(Git) git add . = para carregar todos os arquivos para o commit
// (Git) git commit -m "colocarmensagem" = carregar os arquivos para enviar com a mensagem
// (Git) git push origin main = enviar os arquivos atualizados

#include <stdio.h>

int main() {
    int n, i, numeroAluno;
    float mediaAluno;
    scanf("%d", &n);
    
    int aprovados[n],rec[n],reprovados[n];
    float mediaAprovados[n],mediaRec[n],mediaReprovados[n];
    int contAprovados = 0,contRec = 0,contReprovados = 0;

    for (i = 0; i < n; i++) {

        scanf("%d - %f", &numeroAluno, &mediaAluno);

        if (mediaAluno >= 7.0) {
            aprovados[contAprovados] = numeroAluno;
            mediaAprovados[contAprovados] = mediaAluno;
            contAprovados++;
        } else if (mediaAluno >= 5.0) {
            rec[contRec] = numeroAluno;
            mediaRec[contRec] = mediaAluno;
            contRec++;
        } else {
            reprovados[contReprovados] = numeroAluno;
            mediaReprovados[contReprovados] = mediaAluno;
            contReprovados++;
        }
    }


    printf("Aprovados: ");
    for (i = 0; i < contAprovados; i++) {
        printf("%d (%.1f)", aprovados[i], mediaAprovados[i]);
        if (i < contAprovados - 1) printf(", ");
    }
    printf("\n");

    printf("Recuperação: ");
    for (i = 0; i < contRec; i++) {
        printf("%d (%.1f)", rec[i], mediaRec[i]);
        if (i < contRec - 1) printf(", ");
    }
    printf("\n");

    printf("Reprovados: ");
    for (i = 0; i < contReprovados; i++) {
        printf("%d (%.1f)", reprovados[i], mediaReprovados[i]);
        if (i < contReprovados - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
