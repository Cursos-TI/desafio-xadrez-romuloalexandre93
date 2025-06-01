#include <stdio.h>

int main(){
    int i = 0, a1 = 5, a2 = 5, a3 = 8;

    printf("### Bem-vindo ao Desafio de Movimento de Xadrez! ###\n");

    printf("\nImprimindo movimento da peça Torre.\n");
    while(i < a1){
        printf("Direita\n");
        i++;
    }

    printf("\nImprimindo movimento da peça Bispo.\n");
    i = 0;
    do{
        printf("Cima, Direita\n");
        i++;
    } while(i < a2);

    printf("\nImprimindo movimento da peça Rainha.\n");
    for(i = 0; i < a3; i++){
        printf("Esquerda\n");
    }

    return 0;
}