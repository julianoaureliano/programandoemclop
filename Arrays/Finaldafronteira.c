// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>

float calcularPorcentagem(int quantidade, int total) {
    return (float)quantidade / total * 100;
}

int main() {
    int N, M;
       
    scanf("%d %d", &N, &M);
    char mapa[N][M];
    int agua = 0,hostil = 0,deserto = 0,vegetacao = 0,solo = 0;
    int total = N * M;
    
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf(" %c", &mapa[i][j]);  
            if (mapa[i][j] == '~') {
                agua++;
            } else if (mapa[i][j] == 'X') {
                hostil++;
            } else if (mapa[i][j] == '^') {
                deserto++;
            } else if (mapa[i][j] == '*') {
                vegetacao++;
            } else if (mapa[i][j] == '.') {
                solo++;
            }
        }
    }
    

    float percAgua = calcularPorcentagem(agua, total);
    float percHostil = calcularPorcentagem(hostil, total);
    float percDeserto = calcularPorcentagem(deserto, total);
    float percVegetacao = calcularPorcentagem(vegetacao, total);

    if (percHostil > 0) {
        printf("Planeta Hostil\n");
    } else if (percAgua >= 85.0) {
        printf("Planeta Aquático\n");
    } else if (percDeserto >= 60.0) {
        printf("Planeta Desértico\n");
    } else if (percVegetacao >= 65.0) {
        printf("Planeta Selvagem\n");
    } else if (percAgua >= 50.0 && percVegetacao >= 20.0) {
        printf("Planeta Classe M\n");
    } else {
        printf("Planeta Inóspito\n");
    }
    
    return 0;
}
