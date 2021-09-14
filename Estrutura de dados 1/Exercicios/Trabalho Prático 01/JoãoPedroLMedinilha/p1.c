/*
1. Existe uma lenda que diz que um rei, que estava muito feliz com o sábio da Corte pois ele
havia inventado o jogo de xadrez, como recompensa decidiu conceder a este sábio a escolha de
um prêmio qualquer que ele desejasse. O sábio pensou e escolheu receber grãos de trigo
contabilizados de maneira proporcional aos 64 quadrados do tabuleiro do jogo. A conta deveria
ser a seguinte: 1 grão no 1o quadrado; o dobro de grãos do 1º quadrado no 2o quadrado; o dobro
de grãos do 2o quadrado no 3o quadrado e assim por diante, até atingir o 64o quadrado. Construa
um programa em linguagem C que calcule a quantidade de grãos que o sábio finalmente esperava
receber. Obs: a lenda termina dizendo que o rei não ficou nada satisfeito com o resultado final e
mandou decapitar o sábio.
*/

#include<stdio.h>

int main (void){

    int acumulador=1;
	printf("acumulador:  %d \n", acumulador);	
    for (int i= 1; i<=64; i++){
        acumulador = (acumulador * 2);
        printf("acumulador:  %d \n",acumulador);
    }

	return(0);
}