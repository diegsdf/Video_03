#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// TURMA SEXTA FEIRA UNINOVE SANTO AMARO - NOITE
// Naltair Maria dos Santos Silva RA 2215104206
// Diego Silva de Freitas         RA 2215200622
// Cristiano Pereira de Ramos     RA 416202354

void atividade();
void comece();
void evernote();
void senso();
void recompensa();

int f,s;
char a[200],b[200],c[200],d[200],e[200];
int main(){
	printf("7 HABITOS\n\n");
	
	atividade();
	comece();
	evernote();
	senso();
	recompensa();
}

void atividade(){
	
	printf("1.PRINCIPIOR 80/20\n\n");
	printf("Pense sobre 5 atividades importantes do seu dia!\n");
	printf("Agora informe as atividades(nao precisa ser sequencial)\n\n");
	printf ("Digite a primeira atividade:\n");
	gets(a);
	printf ("Digite a segunda atividade:\n");
	gets(b);
	printf ("Digite a terceira atividade:\n");
	gets(c);	
	printf ("Digite a quarta atividade:\n");
	gets(d);	
	printf ("Digite a quinta atividade:\n");
	gets(e);		
	
	system("pause");
	system("cls");
}


void comece(){
printf("2.Comece com mais importante\n\n");	
printf("Agora que definido as atividades\n");
printf("Comece seu dia com 3 tarefas mais importantes e de maior impacto\n\n");	
printf("%s\n%s\n%s\n%s\n%s\n\n",a,b,c,d,e);
	system("pause");
	system("cls");

}

void evernote(){
printf("3.Anote ideias e faca revisao semanal\n\n");

printf("Programa recomendado: EVERNOTE\n");
printf("Ou se preferir use um bloco de notas ou celular\n");
printf("Revise semanalmente e encaixe boas ideias em uma agenda\n");
	system("pause");
	system("cls");
}



void senso(){
	
	printf("4.Senso de urgencia\n\n");
		printf("%s\n%s\n%s\n%s\n%s\n\n",a,b,c,d,e);
	printf("Diga um prazo de alguma das atividades mencionadas acima (em dias):\n\n");
	scanf("%d", &f);
	s = f-1;
	printf("Realize essa atividade em %d\n",s);
	system("pause");
	system("cls");	
}

void recompensa(){
	printf("5.Adicione Recompensas e Consequencias\n\n");
	
	printf("Escolha uma recompensa e uma consequencia\n");
	printf("Voce concluiu a tarefa em %d dias?\n1-SIM - 2-NAO\n",s);
	int t;
	scanf("%d",&t);
	switch(t){
		case 1:{
			printf("Otimo!!!\nAproveite sua recompensa\n\n");
			break;
		}
		case 2:{
			printf("Voce pagara um almoco para 3 pessoas do seu trabalho\n");
			break;
		}
	}
	printf("6.Comece aos popucos\n");
	printf("Defina um tempo para atividade escolhida\n");
	printf("Comece aos poucos e aumente gradativamente\n\n");
	
	printf("7.Monitore seu progresso\n\n");
	printf("Anote cada atividade concluida e toda Final de semana monitore");
}
