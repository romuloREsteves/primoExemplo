#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>
#define valor 100

typedef struct{
	char nome[20];
	char telefone[6];
	char email[15];
	char sexo;
}cliente;
typedef struct{
	cliente dados[100];
	int controle; 
}listar;

void cadastraCliente(listar *infos);
int exibeCliente(listar *infos);
void apagarCliente(listar *infos);

main(){
	setlocale(LC_ALL,"portuguese");
	int menu;
	listar infos;
	infos.controle=0;
	do{
		do{
	printf("-------Menu-------\n");
	printf("1- Cadastrar Cliente\n");
	printf("2- Exibe Cliente\n");
	printf("3 -Apagar Cliente\n");
	printf("4 -Sair\n");
	scanf("%i",&menu);
		}while(menu<1||menu>4);
	switch(menu){
		case 1:
			cadastraCliente(&infos);
		break;
		case 2:
			exibeCliente(&infos);
		break;
		case 3:
			apagarCliente(&infos);
		break;
		case 4:
		printf("-----Sair------");	
		break;
		}
	}while(menu!=4);
}

void cadastraCliente(listar *infos){
	if(infos->controle==valor){
		printf("LOTADO");	
	}else{
		cliente escolha;
		printf("Nome Cliente ");
		fflush(stdin);
		gets(escolha.nome);
		printf("telefone Cliente ");
		fflush(stdin);
		gets(escolha.telefone);
		printf("Email Cliente ");
		fflush(stdin);
		gets(escolha.email);
		printf("Sexo Cliente ");
		fflush(stdin);
		scanf("%c",&escolha.sexo);
		infos->dados[infos->controle]=escolha;
		infos->controle++;
	}
	
}
int exibeCliente(listar *infos){
	if(infos->controle==0){
	printf("VAZIO ");	
	}else{
	char nomee[20];
	printf("Nome Cliente ");
		fflush(stdin);
		gets(nomee);
		for(){
			
		}
		
	}
	
}
void apagarCliente(listar *infos){
}
