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

/*Exercicio
leia uma matriz densa de um arquivo, calcule e imprima a soma dos valores de cada linha e de cada coluna
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
int combo, dinheiro, preco, troco;
scanf("%d %d", &combo, &dinheiro);
switch(combo){
        case 1:
    preco=12;
    if(dinheiro == preco){
        printf("Deu certim!");
    }
    else if(dinheiro >preco){
        troco = dinheiro - preco;
        printf("Troco = %d reais",troco);
    }
    else{
        troco= preco - dinheiro;
        printf("Saldo insuficiente! Falta %d reais",troco);
    }
    break;
    case 2:
    preco=23;
    if(dinheiro == preco){
        printf("Deu certim!");
    }
    else if(dinheiro >preco){
        troco = dinheiro - preco;
        printf("Troco = %d reais",troco);
    }
    else{
        troco= preco - dinheiro;
        printf("Saldo insuficiente! Falta %d reais",troco);
    }
    break;
    case 3:
    preco=31;
    if(dinheiro == preco){
        printf("Deu certim!");
    }
    else if(dinheiro >preco){
        troco = dinheiro - preco;
        printf("Troco = %d reais",troco);
    }
    else{
        troco= preco - dinheiro;
        printf("Saldo insuficiente! Falta %d reais",troco);
    }
    break;
    case 4:
    preco=28;
    if(dinheiro == preco){
        printf("Deu certim!");
    }
    else if(dinheiro >preco){
        troco = dinheiro - preco;
        printf("Troco = %d reais",troco);
    }
    else{
        troco= preco - dinheiro;
        printf("Saldo insuficiente! Falta %d reais",troco);
    }
    break;
    case 5:
    preco=15;
    if(dinheiro == preco){+
        printf("Deu certim!");
    }
    else if(dinheiro >preco){
        troco = dinheiro - preco;
        printf("Troco = %d reais",troco);
    }
    else{
        troco= preco - dinheiro;
        printf("Saldo insuficiente! Falta %d reais",troco);
    }
    break;

        
        

    }




  return 0;
}