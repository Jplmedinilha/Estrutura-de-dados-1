/*
6. Suponha que você está desenvolvendo um sistema de cálculo de frete para uma empresa
transportadora. Este cálculo depende do peso da carga e da região do país para onde ela será
transportada. Se o peso for igual ou inferior a 1000 quilos o valor do frete equivale a R$ 0,10 por
quilo. Se ele for maior do que 1000 quilos e menor ou igual a 40000 quilos, o valor do frete equivale
a R$ 0,18 por quilo. Se o peso for superior a 40000 quilos o frete equivale a R$ 0,23 o quilo. Se o
destino da carga for a região Norte, R$ 550,00 deverão ser acrescidos ao valor do frete. Este valor
será R$ 400,00 se a região for a Nordeste; R$ 300 se a região for a Centro-Oeste; R$ 250 se o destino
for a região Sul e, finalmente, R$ 150 se o destino for a região Sudeste. Assumindo a seguinte
tabela de códigos para as regiões do país, construa um programa em linguagem C que leia o peso
da carga e a região para onde ela deverá ser transportada e imprima o valor total do frete. Caso
o código da região não conste da tabela a mensagem “região inválida” deverá ser impressa.
*/

#include<stdio.h>
#include<stdlib.h>

int main (void){
		
	float peso, frete;
    int regiao;

    printf("Digite o peso da carga:\n");
    scanf("%f", &peso);
    printf("Digite a regiao para ser entregue:\n");
    printf("(1- norte / 2- nordeste / 3- centro-oeste / 4- sul / 5- sudeste)\n");
    scanf("%d", &regiao);

    switch (regiao)
    {
    case 1:
        if(peso<=1000){
            frete = peso*0.1+550;
            printf("Preco do frete: %.2f", frete);
        }else{
            if(peso>1000 && peso <=40000){
                frete = peso*0.18+550;
                printf("Preco do frete: %.2f", frete);
            }
            else{
                frete = peso*0.23+550;
                printf("Preco do frete: %.2f", frete);
            }
        }
        break;
    case 2:
        if(peso<=1000){
            frete = peso*0.1+400;
            printf("Preco do frete: %.2f", frete);
        }else{
            if(peso>1000 && peso <=40000){
                frete = peso*0.18+400;
                printf("Preco do frete: %.2f", frete);
            }
            else{
                frete = peso*0.23+400;
                printf("Preco do frete: %.2f", frete);
            }
        }
        break;
    case 3:
        if(peso<=1000){
            frete = peso*0.1+300;
            printf("Preco do frete: %.2f", frete);
        }else{ 
            if(peso>1000 && peso <=40000){
                frete = peso*0.18+300;
                printf("Preco do frete: %.2f", frete);
            }
            else{
                frete = peso*0.23+300;
                printf("Preco do frete: %.2f", frete);
            }
        }
        break;
    case 4:
        if(peso<=1000){
            frete = peso*0.1+250;
            printf("Preco do frete: %.2f", frete);
        }else{
            if(peso>1000 && peso <=40000){
                frete = peso*0.18+250;
                printf("Preco do frete: %.2f", frete);
            }
            else{
                frete = peso*0.23+250;
                printf("Preco do frete: %.2f", frete);
            }
        }
        break;
    case 5:
        if(peso<=1000){
            frete = peso*0.1+150;
            printf("Preco do frete: %.2f", frete);
        }else{
            if(peso>1000 && peso <=40000){
                frete = peso*0.18+150;
                printf("Preco do frete: %.2f", frete);
            }
            else{
                frete = peso*0.23+150;
                printf("Preco do frete: %.2f", frete);
            }
        }
        break;
    
    default:
    printf("Regiao invalida!");
        break;
    }

	return(0);
}