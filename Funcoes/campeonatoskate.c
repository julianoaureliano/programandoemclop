// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>


int calcularScoreDia(int x, int y, int z) {
    if (x == y && y == z) {
        return x;  //todos iguais
    } else if (x == y || x == z) {
        return x;  //dois iguais,retorna o que se repetiu
    } else if (y == z) {
        return y;  //dois iguais, retorna o que se repetiu
    } else {
        //retorna o valor que esta no meio
        if ((x > y && x < z) || (x > z && x < y)) {                
            return x;
        } else if ((y > x && y < z) || (y > z && y < x)) {
            return y;
        } else {
            return z;
        }
    }
}


int calcularScoreFinal(int d1, int d2, int d3) {
    return calcularScoreDia(d1, d2, d3);
}

int main() {
    int a[9], b[9];
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }
    
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &b[i]);
    }
    
    
    int scoreA[3], scoreB[3];
    
    for (int i = 0; i < 3; i++) {

        scoreA[i] = calcularScoreDia(a[i * 3], a[i * 3 + 1], a[i * 3 + 2]);
        scoreB[i] = calcularScoreDia(b[i * 3], b[i * 3 + 1], b[i * 3 + 2]);
    }
    
    int scoreFinalA = calcularScoreFinal(scoreA[0], scoreA[1], scoreA[2]);
    int scoreFinalB = calcularScoreFinal(scoreB[0], scoreB[1], scoreB[2]);
    
    if (scoreFinalA > scoreFinalB) {
        printf("A\n");
    } else if (scoreFinalB > scoreFinalA) {
        printf("B\n");
    } else {
        printf("empate\n");
    }
    
    return 0;
}
