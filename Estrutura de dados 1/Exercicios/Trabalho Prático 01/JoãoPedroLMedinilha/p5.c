/*
5. Um supermercado deseja reajustar (para cima ou para baixo) os preços de seus produtos com
base nos critérios apresentados na tabela a seguir. Construa um programa em linguagem C leia
do teclado o preço e o volume mensal de vendas de 20 produtos e, para cada um deles, imprima
na tela o seu preço reajustado.
https://prnt.sc/1s42hto
*/

#include<stdio.h>
#include<stdlib.h>

int main (void){
		int vendaMensal;
        float iPrice, fPrice;

        for(int i = 1; i<=20; i++){

        printf("Insira a quantidade de vendas mensais desse produto: ");
        scanf("%d",&vendaMensal);
        printf("Insira o valor original desse produto: ");
        scanf("%f",&iPrice);

            if(vendaMensal<500 && iPrice<30){
                fPrice= iPrice +(iPrice*0.1);
                printf("Preco final: %.2f\n", fPrice);
            }
            if(vendaMensal>=500 && vendaMensal<1200 && iPrice>=30 && iPrice<80){
                fPrice= iPrice +(iPrice*0.15);
                printf("Preco final: %.2f\n", fPrice);
            }
            if(vendaMensal>=1200 && iPrice>=80){
                fPrice= iPrice -(iPrice*0.2);
                printf("Preco final: %.2f\n", fPrice);
            }  
    }
    
	return(0);
}