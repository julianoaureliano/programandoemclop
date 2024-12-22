// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
#include <stdio.h>

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void bubbleSort(int arr[], int n) {
    int trocou;  
    do {
        trocou = 0;  
        for (int i = 1; i < n; i++) {
            if (arr[i-1] > arr[i]) {
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                trocou = 1;  
            }
        }
        if (trocou) {            
            imprimirArray(arr, n);
        }
    } while (trocou);  
}

int main() {
    int n;
    
    

    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    imprimirArray(arr, n);
    bubbleSort(arr, n);

    return 0;
}
