#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    int i;
    for(i = 0; i < casas; i++){
        printf("Cima\n");
        printf("Direita\n");
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas){
    int i, j;
    if(casas > 0){
        printf("Cima\n");
        printf("Direita\n");
        printf("Direita\n");
        moverCavalo(casas-1);
    }
}

int main(){
    int opcao;
    printf("### Bem-vindo ao Jogo de Movimento de Xadrez! ###\n\n");

    do{
        printf("\n");
        printf("Escolha sua peca para movimentar: \n");
        printf("1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n0. Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\n");
                printf("Movimentando a Torre:\n");
                moverTorre(5);
                break;
            case 2:
                printf("\n");
                printf("Movimentando o Bispo:\n");
                moverBispo(5);
                break;
            case 3:
                printf("\n");
                printf("Movimentando a Rainha:\n");
                moverRainha(8);
                break;
            case 4:
                printf("\n");
                printf("Movimentando o Cavalo:\n");
                moverCavalo(1);
                break;
            case 0:
                printf("\nSaindo do jogo. Ate a proxima!\n");
                break;
            default:
                printf("Opcao invalida. Reinicie o jogo.\n");
                break;
        }
    } while(opcao != 0);


    return 0;
}
