#include <stdio.h>

int main(){
    int i, j;

    //Imprimindo movimento do Cavalo.
    printf("Cavalo em movimento...\n");
    for(i = 0; i < 1; i++){
        printf("Baixo\n");
        j = 0;
        while(j < 3){
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\nMovimento finalizado.\n");

    return 0;
}