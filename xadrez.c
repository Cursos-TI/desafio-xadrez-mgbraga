#include <stdio.h>

//Função de movimentação da torre
void mover_torre (int casas_torre){

    if (casas_torre <= 0){
        //Define o término da recursividade da função, quando o número de casas a serem movidas chega a zero, interrompe a função.
        return;
    }

    printf("Direita \n"); //imprime o movimento da peça

    mover_torre (casas_torre -1); //chamada recursiva para o próximo movimento

}

//Função movimentação do bispo
void mover_bispo (int casas_bispo){

    if(casas_bispo <= 0){
        //término da recursividade da função, ao final da quantidade definida para a movimentação
        return;        
    }

    //Loop Externo: movimento vertical (uma casa para cima)
    for(int vertical = 0; vertical <1; vertical++){
        //Loop Interno: movimento horizontal (uma casa para direita)
        for(int horizontal = 0; horizontal < 1; horizontal++){
            printf("Cima Direita \n");
            //imprime o resultado quando ambos os loops completam
        }
    }

    mover_bispo (casas_bispo - 1);

}

//Função de movimentação da rainha
void mover_rainha (int casas_rainha, const char *direcao){

    if (casas_rainha <= 0){
        //Determina o término da recursividade da função, quando não houver mais casas a serem movimentadas
        return;
    }

    printf("%s \n", direcao); //imprime o movimento atual

    mover_rainha (casas_rainha - 1, direcao); //chamada recursiva para o próximo movimento
}

//Função de movimentação do cavalo
void mover_cavalo(){

    int casas_verticais = 2;
    int casas_horizontais = 1;

   /*Loop externo para controlar o total do movimento:

   O primeiro loop verifica se a quantidade total de movimentos é menor que a soma das casas verticais + horizontais, se for, ele entra no loop
   O loop interno controla a impressão dos movimentos por direção (vertical e horizontal)

   */
    for (int i = 0; i < casas_horizontais + casas_verticais; i++){
        //Loop interno para controlar o movimento cima -> direita
        for(int j = 0; j < 1; j++){
            if (i < casas_verticais){
                printf("Cima \n");
                continue;
            }else{
                printf("Direita \n");
                break;
            }
        }
   }

}

int main (){

    //Declaração das variáveis, com o número de casas que cada peça vai se movimentar
    int casas_movimentar_torre = 5;
    int casas_movimentar_bispo = 5;
    int casas_movimentar_rainha = 8;
    const char *direcao_rainha = "Esquerda";
    int casas_movimentar_cavalo = 3;
        
    
    //Exibe a movimentação da torre, percorre o número de casas definido na variável
    printf("Movimento da Torre - %d casas para a direita: \n", casas_movimentar_torre);
    mover_torre(casas_movimentar_torre);

    //Exibe a movimentação do bispo, percorre o número de casas definido na variável, imprime uma linha por movimento vertical + horizontal (diagonal)
    printf("Movimento do Bispo - %d casas: \n", casas_movimentar_bispo);
    mover_bispo (casas_movimentar_bispo);

    //Exibe a movimentação da rainha, percorre a quantidade de casas definido na variável
    printf("Movimento da rainha - %d casas para %s. \n", casas_movimentar_rainha, direcao_rainha);
    mover_rainha (casas_movimentar_rainha, direcao_rainha);

    //Exibe a movimentação do cavalo, percorre a quantidade de casas definido na variável
    printf("Movimento do cavalo - 2 Casas para Cima - 1 Casa para Direita: \n");
    mover_cavalo (casas_movimentar_cavalo);

    return 0;

}
