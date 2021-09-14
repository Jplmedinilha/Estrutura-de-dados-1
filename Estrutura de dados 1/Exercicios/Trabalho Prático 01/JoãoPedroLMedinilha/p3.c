/*
3. Construa um programa em linguagem C que resolva o seguinte problema: suponha que você
foi contratado pelo Capivariano Esporte Clube para fazer a contabilização dos pontos obtidos por
ele nas 18 partidas da fase classificatória da Copa Paulista de Futebol. A partir da digitação dos
resultados obtidos em cada uma das partidas (‘V’ para vitória, ‘E’ para empate e ‘D’ para derrota),
faça o somatório de pontos obtidos, lembrando que uma vitória vale 3 pontos, um empate vale 1
ponto e uma derrota vale 0 ponto. A partir da análise deste somatório de pontos, imprima uma
das seguintes mensagens:
* “Classificado em 1º lugar”, se somatório >= 45 pontos;
* “Classificado em 2º lugar”, se 35 pontos <= somatório < 45 pontos;
* “Classificado em 3º lugar”, se 30 pontos <= somatório < 35 pontos;
* “Classificado em 4º lugar”, se 28 pontos <= somatório < 30 pontos;
* “Desclassificado”, se o somatório for menor do que 28 pontos
*/

#include<stdio.h>
#include<stdlib.h>

int main (void){

	char cat;
    int pontos=0, i;

    for(i=1;i<=18;i++){
        do{
        printf("Digite (%d):\n\nV para vitoria\nE para empate\nD para derrota\n\n", i);
        scanf("%c", &cat);
        system("cls");
        }while(cat!='v' && cat!='e' && cat!='d' && cat!='V' && cat!='E' && cat!='D');

        if(cat=='v' || cat=='V'){
            pontos+=3;
        }
         if(cat=='e' || cat=='E'){
            pontos+=1;
        }
        system("cls");
    }
    if(pontos>=42)
        printf("Classificado em 1o lugar\nPontos= %d", pontos);
    else if(pontos>=35)
        printf("Classificado em 2o lugar\nPontos= %d", pontos);
    else if(pontos>=30)
        printf("Classificado em 3o lugar\nPontos= %d", pontos);
    else if(pontos>=28)
        printf("Classificado em 4o lugar\nPontos= %d", pontos);
    else
        printf("Desclassificado\nPontos= %d", pontos);
        
	return(0);
}