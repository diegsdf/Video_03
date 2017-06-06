#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
// TURMA SEXTA FEIRA UNINOVE SANTO AMARO - NOITE
// Naltair Maria dos Santos Silva RA 2215104206
// Diego Silva de Freitas         RA 2215200622
// Cristiano Pereira de Ramos     RA 416202354

int b=0;

int main(){
	printf("TECNICA POMODORO - CRONOMETRO\n\n");
	printf("Escolha uma atividade e dedica-se o tempo determinado nela\n");
	printf("1- Atividades importantes - 25 MINUTOS\n");
	printf("2- Atividades extras (Pausa) - 5 MINUTOS\n");
	scanf("%d",&b);
	switch (b)
	{
		case 1:
		tempo1();
		break;
		
		case 2:
		tempo2();
		break;	
	}
}


int tempo1(){
	
	int seg=0,min=0,hr=0;
	int i = 0;
	while(i<10){
	printf("Tempo para atividades importantes\n%dH:%dM:%dS",hr,min,seg);
	Sleep(1000);
	system("cls");
	seg++;
		
	if(seg==60){
		seg=0;
		min++;
		}
	if(min==25){
		min=0;
		return 0;
		}
	}
}


int tempo2(){
	int seg=0,min=0,hr=0;
	int i = 0;
	while(i<5){
	printf("%Tempo para atividades Extra\n%dH:%dM:%dS",hr,min,seg);
	Sleep(1000);
	system("cls");
	seg++;
		
	if(seg==60){
		seg=0;
		min++;
		}
	if(min==5){
		min=0;
		return 0 ;
		}
	}
		
}
