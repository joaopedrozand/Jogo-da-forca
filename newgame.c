/*	Name: Jogo da forca
	Author: João Pedro Zandoná
	Date: 10/11/17 04:16
	Description: Projeto final da disciplina */
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<windows.h>
#define T 19
void cenario(void);
void head(void);
void body(void);
void lefthand(void);
void righthand(void);
void leftleg(void);
void rightleg(void);
int main (void){
	setlocale(LC_ALL,"PORTUGUESE");
	int i,j,vidas,exec,op;
	char *palavra;
	char nome[25],letra;
	char lacuna[16]="_";
	char palavras[T][16]={"humanidade","juventude","shopping","supermercado","historia","camiseta","abacaxi","acerola","computador","tartaruga","cachorro","atividade","especialista","entusiasmo","capitalismo","socialismo","desenvolvimento","sistemas"};
//sorteia uma palavra entre as pré definidas	
	srand(time(NULL));
	palavra = palavras[rand()%T];
//preenche as lacunas com o comprimento da palavra
	for(i=1;i<strlen(palavra);i++)
    	lacuna[i]='_';
//introdução do jogo
	system("cls");
	system("color b");
	fflush(stdin);
	printf("Bem vindo ao jogo da forca!\nDigite seu nome para começar.\n\nNOME: ");
	gets(nome);
	vidas = 6;
//inicio do jogo
	do{	
		exec=1;
//limpa o buffer do teclado pra evitar quaisquer erros
		fflush(stdin);
		system("cls");
//faz a parte de interface do boneco
		if(vidas==6)cenario();
		else if(vidas==5)head();
		else if(vidas==4)body();
		else if(vidas==3)lefthand();
		else if(vidas==2)righthand();
		else if(vidas==1)leftleg();
		else if(vidas==0)rightleg();
//printa as lacunas
		printf("\t\t%s\n",lacuna);
        printf("\nDigite uma letra: ");
       	fflush(stdin);
	    scanf("%c",&letra);
//verifica se a letra digitada está na palavra  
		for(i=0,j=0;i<strlen(palavra);i++)
            if(letra == palavra[i]){
				lacuna[i] = letra;
				j++;
            }
//verifica se acertou a letra na rodada anterior
		if(j==0)
			vidas--;
//verifica se já acertou a palavra inteira
		if(strcasecmp(palavra,lacuna) == 0){
			system("cls");
			system("color a");
			printf("A palavra era: %s.\n\nVocê ganhou o jogo %s, parabéns!\n\n\n\n",palavra,nome);
			exec=0;
		}
//verifica se já acabaram as vidas do jogador
		if(vidas==0){
			system("cls");
			system("color c");
			printf("A palavra era: %s.\n\nVocê perder o jogo %s, mais sorte na próxima vez!\n\n\n",palavra,nome);
			exec=0;
		}
	}while(exec==1);
//fim do jogo e pergunta se deseja jogar novamente
	system("color b");
	system("PAUSE");
	system("cls");
	printf("Deseja jogar novamente?\n1-SIM\n2-NÃO\n\n");
	scanf("%d",&op);
	if(op==1)
		main();
	else
		return 0;
}
//funções da interface do boneco
void cenario(void){
	printf(" +-------+\n |       |\n |       |\n |\n |\n |\n_|_");
}
void head(void){
	printf(" +-------+\n |       |\n |       |\n |       o\n |\n |\n_|_");	
}
void body(void){
	printf(" +-------+\n |       |\n |       |\n |       o\n |       |\n |\n_|_");
}
void lefthand(void){
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\n |\n_|_");
}
void righthand(void){
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |\n_|_");
}
void leftleg(void){
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      /\n_|_");
}
void rightleg(void){
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_");
}
