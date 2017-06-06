#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// TURMA SEXTA FEIRA UNINOVE SANTO AMARO - NOITE
// Naltair Maria dos Santos Silva RA 2215104206
// Diego Silva de Freitas         RA 2215200622
// Cristiano Pereira de Ramos     RA 416202354

void FEYNMAN();
void equacao();
void soma();
 int a;
 char b[20];
int main() 
{	printf("TECNICA DE FEYNMAN\n\n");
    printf("Digite seu nome:\n");
    gets(b);
    printf("Digite sua idade:\n");
    scanf("%d",&a);
	
    FEYNMAN();
    return 0;
}

void FEYNMAN()
{	
    int opc = 0;
    
        system("cls");
        printf("Ola, %s\nEscolha um tema: \n",b);
        printf("1 - Adicao/Subtracao\n");
        printf("2 - Equacao\n");
        printf("3 - Calculadora EQUACAO\n");
        printf("4 - Calculadora Adicao\n");
		scanf("%d", &opc);
        system("cls");
        switch (opc)
        {
            case 1:
                printf("Sugestoes de sites: \n\n");
            printf("Wikipedia\nSoMatematica\nInfoEnem\n\n");
            int g;
				printf("Deseja usar calculadora Adicao/Subtracao 1-Sim ou 2-Nao\n");
				scanf("%d",&g);
				if (g == 1){
				soma();
						   }
			else printf("Obrigado");
            break;
                
            case 2:
				printf("Sugestoes de sites: \n\n"); 
                printf("Wikipedia\nAprenderMatematica\nMundoEducacao\n\n");
				int h;
				printf("Deseja usar calculadora: 1-Sim ou 2-Nao\n");
				scanf("%d",&h);
				if (h == 1){
				equacao();
						   }
			else printf("Obrigado");
			break;
                  
			case 3:				
			equacao();
			break;	  
			
			case 4:
			soma();		
			break;	
				  }
}


void equacao()
{
double a,b,c,raiz,e,e1;
printf("Digite variavel A: ");
scanf("%lf",&a);
printf("Digite variavel B: ");
scanf("%lf",&b);
printf("Digite variavel C: ");
scanf("%lf",&c);
raiz = b*b - 4*a*c;
e = (-b + sqrt(raiz))/(2*a);
e1 = (-b - sqrt(raiz))/(2*a);
if(a==0 || raiz < 0)
    {
       printf("Impossivel calcular\n");
    }
    else{
	 printf("R1 = %.5lf\n",e);
	 printf("R2 = %.5lf\n",e1);
}
}


void soma() {
 
int A,B,soma,subtracao;
	
	printf("Digite o primeiro numero\n");
	scanf("%d",&A);
	printf("Digite o segundo numero\n");
	scanf("%d",&B);
	soma = A + B;
	subtracao = A - B;
	printf("SOMA = %d\n",soma);
	printf("SUBTRACAO = %d\n",subtracao);
}
