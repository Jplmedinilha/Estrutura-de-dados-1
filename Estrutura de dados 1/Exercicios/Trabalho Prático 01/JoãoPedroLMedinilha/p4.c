/*
4. Construa um programa em linguagem C que leia um conjunto de tamanho indefinido de
números inteiros, obrigatoriamente variando entre 1 e 5. Terminada a leitura dos números, um
histograma horizontal simples deverá ser impresso na tela representando a quantidade de vezes
que cada número se repetiu durante a digitação. Para que a impressão seja feita adequadamente,
deve-se assumir que cada número poderá se repetir no máximo 80 vezes, pois assume-se que a
largura total da tela seja igual a 80 colunas. A título de exemplo, a seguir é apresentada a captura
da tela durante uma execução do programa.
Digite um numero entre 1 e 5: 1
Continua? (S/N) S
Digite um numero entre 1 e 5: 2
Continua? (S/N) S
2
Digite um numero entre 1 e 5: 3
Continua? (S/N) S
Digite um numero entre 1 e 5: 4
Continua? (S/N) S
Digite um numero entre 1 e 5: 5
Continua? (S/N) S
Digite um numero entre 1 e 5: 6
Numero invalido. Digite novamente.
Digite um numero entre 1 e 5: 1
Continua? (S/N) S
Digite um numero entre 1 e 5: 3
Continua? (S/N) S
Digite um numero entre 1 e 5: 3
Continua? (S/N) S
Digite um numero entre 1 e 5: 3
Continua? (S/N) N
HISTOGRAMA:
1: ** (2)
2: * (1)
3: **** (4)
4: * (1)
5: * (1)
*/

#include<stdio.h>
#include<stdlib.h>

int main (void){
    int quantity[6]={0};
    int currentNumber;
    char conf='S';

    while(conf=='s' || conf=='S' || conf=='y' || conf=='Y'){
        
        printf("\nDigite um numero entre 1 e 5: ");
        scanf("%d", &currentNumber);
    
            switch (currentNumber)
            {
            case 1:
                quantity[1]++;
                break;
            case 2:
                quantity[2]++;
                break;
            case 3:
                quantity[3]++;
                break;
            case 4:
                quantity[4]++;
                break;
            case 5:
                quantity[5]++;
                break;
            
            default:
                printf("\nNumero invalido!\n");
                break;   
            }
            printf("Continua? (S/N) ");
            scanf(" %c",&conf);
    }
    for(int i = 1; i<6;i++){
        //int stars = quantity[i];
        printf("%d: ",i);
        for(int x=1; x<=quantity[i]; x++){ //repetição dos *
            printf("*");
        }
        printf(" (%d)\n",quantity[i]);
    }

		
	return(0);
}
