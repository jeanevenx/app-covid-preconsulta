#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct
{
	char CPF  [15];
	char nome [50];
	char sexo;
	int idade;
			
}cadastro;


bool verifCPF(char Vcpf[15]){
	bool valide = false;

	
	if (!(strlen(Vcpf)==14 && Vcpf[3]=='-' && Vcpf[7]=='-' && Vcpf[11]=='.'))
	{
		valide = true;;
	}
return valide;
}



int main() 
{
	setlocale(LC_ALL, "portuguese");
	cadastro paciente;
	int i;
	char resp;
	int pontos = 0;
	
	//Array recebendo a pontua��o de cada sintoma
	int pontuacao[10]={5, 1, 1, 1, 3, 10, 1, 1, 10, 3};
	
	//Array recebendo as sintomas
	char *sintomas[]=
	{
		"Tem Febre?:","Tem dor de cabe�a?:",
		"Tem dor/irrita��o na garganta?:","Tem secre��o nasal ou espirros?:",
		"Tem tosse seca?:","Tem dificuldade respirat�ria?:",
		"Tem dores no corpo?:","Tem diarr�ia?:",
		"Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19?:","Esteve em locais com grande aglomera��o?:"
	};

	printf("=================\n");
	printf("FA�A SEU CADASTRO\n");
	printf("=================\n");
	
	
		printf("INFORMA SEU CPF(ex:123-456-789.11):");
		fgets(paciente.CPF,15,stdin);
		fflush(stdin);
		while (verifCPF(paciente.CPF)){
			printf("CPF INVALIDO. Digite novamente:");
			fgets(paciente.CPF,15,stdin);
			fflush(stdin);
		}
		
		printf("INFORMA SEU NOME:");
		fgets(paciente.nome, 50, stdin);
		fflush(stdin);

		printf("INFORMA SEU SEXO:");
		scanf("%c", &paciente.sexo);
		fflush(stdin);
		
		printf("INFORMA SEU IDADE:");
		scanf("%d", &paciente.idade);
		fflush(stdin);
	
		system("pause");
		system("cls");
		
 
	printf("        QUESTION�RIO\n");
	printf("===========================\n");
	printf("Para cada sintoma responde \npor S [sim] ou N [N�O].\n");
	printf("===========================\n");
	
	for (i=0; i< 10; i++)
	{
		printf("%s",sintomas[i]);
		scanf("%c", &resp);
		fflush(stdin);
		
		while(!((resp=='s')||(resp=='S')||(resp=='n')||(resp=='N')))
		{
			printf("[Erro]digite s ou n--> %s",sintomas[i]);
			scanf("%c", &resp);
			fflush(stdin);	
			
		}
		if((resp=='s')||(resp=='S'))
		{
		 	pontos = pontos + pontuacao[i];
		}
		
	}

	printf("=====================================\n");
	printf("RESULTADO\n");
	printf("Pontua��o:%d\n",pontos);
	
	//Verificando pela qual ala que o cliente deve ir
	if(pontos <= 9)
	{
		printf("Seu risco para covid � baixo, dirija-se ao setor azul. ");
	}
	else if((pontos >=10) && (pontos <=19))
	{
		printf("Seu risco para covid � m�dio, dirija-se ao setor verde. ");	
	}
	else if(pontos >=20)
	{
		printf("Seu risco para covid � alto, dirija-se ao setor laranja. ");	
	}

	//Abrir o arquivo para gravar
	FILE *farq = fopen("Cadastro_pacientes.txt", "a");
	
	if(farq)
	{
		fprintf(farq, "DADOS DO PACIENTE\n\n");
		
		//Gravar os dados do paciente no arquivo
		fprintf(farq, "CPF:%s\nNome: %sSexo: %c\nIdade:%d\nTotal de pontos: %d\n",
		paciente.CPF,paciente.nome,paciente.sexo, paciente.idade, pontos);	
		fprintf(farq, "-------------------------\n");
		//Fechar o arquivo
		fclose(farq);
	}
	
	else
	{
	    printf("Erro ao Abrir o arquivo");
	}
	
	return 0;
}
