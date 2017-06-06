#include<stdio.h>
#include<stdlib.h>

// TURMA SEXTA FEIRA UNINOVE SANTO AMARO - NOITE
// Naltair Maria dos Santos Silva RA 2215104206
// Diego Silva de Freitas         RA 2215200622
// Cristiano Pereira de Ramos     RA 416202354

int main()
{
int recompensa;
printf("O PODER DO HABITO\n\n");

printf("Escolha 1 das atividades que deseja alcancar:\n\n");
printf("1 - Perder peso\n");
printf("2 - Comprar algo\n");
scanf("%d",&recompensa);
system("cls");
switch (recompensa){
	case 1:
		gatilho();
	break;
	case 2:
		gatilho2();
	break;
					}			
}
 

int gatilho(){
	int gatilho;
printf("O que faz voce ganhar peso? \n");
		printf("1 - Comer muita  massa \n");
		printf("2 - Ansiedade \n");
		printf("3 - Nao ter tempo\n\n");
		scanf("%d",&gatilho);
		system("cls");
		if (gatilho ==1){
			printf("Possiveis rotinas a serem praticadas:\n\n");
			
			printf("1- Ao ives de comprar massa, tente alterar por uma salada\n");
			printf("2- Troque aquele restaurante que tem muita massa, por um mais saudavel\n");
			printf("3- Tente levar marmita ao inves de comer fora\n\n");
			printf("***Agora comece a praticar uma dessas rotinas\n");
			printf("que sua recompensa sera garantida***");
		}
		if (gatilho == 2){
			printf("Possiveis rotinas a serem praticadas:\n\n");
			printf("1- Pare 5 minutos e respire sem pensar em nada\n");
			printf("2- Escute uma musica que voce goste\n\n");
			printf("***Agora comece a praticar uma dessas rotinas \n");
			printf("que sua recompensa sera garantida***");
		}	
		
		if (gatilho == 3){
			printf("Possiveis rotinas a serem praticadas:\n\n");
			printf("1- Tente nao pedir Fast Food, mas uma salada ou algo menos gorduroso\n");
			printf("2- Procure fazer sua pausa\n\n");			
			printf("***Agora comece a praticar uma dessas rotinas \n");
			printf("que sua recompensa sera garantida***");
		}		
}


int gatilho2(){
	int gatilho;
printf("O que faz voce nao comprar o que deseja?\n");
		printf("1 - Ser compulsivo e ter dinheiro suficiente\n");
		printf("2 - Nao juntar dinheiro \n");
		scanf("%d",&gatilho);
		system("cls");
		if (gatilho ==1){
			printf("Possiveis rotinas a serem praticadas:\n\n");
			
			printf("1- Tente sair somente com o minimo de dinheiro\n");
			printf("2- Faca sempre a pergunta: Eu preciso desse objeto?\n\n");
			printf("***Agora comece a praticar uma dessas rotinas\n");
			printf("que sua recompensa sera garantida***");
		}
		if (gatilho == 2){
			printf("1- Possiveis rotinas a serem praticadas:\n\n");
			printf("2- Defina uma quantia, e invista todos mes em uma poupanca\n");
			printf("3- Compre um cofrinho e deposite sempre alguma quantia\n\n");
			printf("***Agora comece a praticar uma dessas rotinas\n");
			printf("que sua recompensa sera garantida***");
		}	
}
