/*
2. Construa um programa em linguagem C que simule um jogo de adivinhação entre dois
jogadores. O programa deverá permitir que o primeiro jogador digite um número inteiro que
pode variar entre 0 e 100. A seguir o programa deverá permitir que o segundo jogador digite uma
sequência de números na tentativa de adivinhar o número original digitado pelo primeiro
jogador. A cada tentativa, se o número fornecido for maior que o número original, o programa
deverá imprimir a mensagem “chutou alto”; caso o número fornecido seja menor que o original
a mensagem impressa será “chutou baixo”. Quando finalmente o segundo jogador digitar um
número igual ao número original, o programa se encerra imprimindo a mensagem “game over”,
além de imprimir o número de tentativas feitas pelo segundo jogador para acertar o número
*/

#include<stdio.h>
#include<stdlib.h>

int main (void){


		int n1, n2, tries=1;

        do{
            printf("Digite um numero de 0 a 100: ");
            scanf("%d", &n1);
            system("cls");
        } while (n1>100 || n1<0);
		
        while(n1!=n2){
            do{
                printf("Tentativa %d \n",tries);
                scanf("%d", &n2);
                system("cls");
            }while (n2>100 || n2<0);
                if(n2>n1){
                    printf("Voce chutou muito alto!\n");
                    tries++;
                }
                if(n2<n1){
                    printf("Voce chutou muito baixo!\n");
                    tries++;
                }   
        }
        printf("Voce acertou!\n%d tentativas gastas", tries);

	return(0);
}