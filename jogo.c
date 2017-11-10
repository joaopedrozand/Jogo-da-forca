#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main (){
	setlocale(LC_ALL,"PORTUGUESE");
	int acertos=0,erros=0,num_palavra,i,j,exec=1,len_palavra;
	char *palavra;
	char lacuna[20]="_";
	char letra,player1[25],letraserradas[25];
	printf("Bem vindo ao jogo da forca.\nUma palavra aleatória será escolhida e você precisa acertar!\n\n\n");
	system("PAUSE");
	system("cls");
	printf("Digite o nome do jogador!\nNOME: ");
	gets(player1);
	system("cls");
	printf("O jogo irá começar %s, boa sorte! :)\n",player1);
	srand(time(NULL));
	num_palavra=(rand() %11);
	switch (num_palavra){
	case 1:
		palavra = "arroz";
		break;
	case 2:
		palavra = "tomate";
		break;
	case 3:
		palavra = "xuxa";
		break;
	case 4:
		palavra = "manjeiricao";
		break;
	case 5:
		palavra = "temer";
		break;
	case 6:
		palavra = "acerola";
		break;
	case 7:
		palavra = "botina";
		break;
	case 8:
		palavra = "camiseta";
		break;
	case 9:
		palavra = "lambreta";
		break;
	default:
		palavra = "cocozinho";
		break;
}
	len_palavra = strlen(palavra);
    for(i=1; i<len_palavra; i++)
    lacuna[i]='_';
    while (exec != 0){
    system("cls");
	printf(" +-------+\n |       |\n |       |\n |\n |\n |\n_|_");
	if(erros==2){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |\n |\n_|_");	
	}else if(erros==4){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |       |\n |\n_|_");
	}else if(erros==6){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\n |\n_|_");
	}else if(erros==8){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |\n_|_");	
	}else if(erros==10){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      /\n_|_");
	}else if(erros==12){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_");
	}else if(erros >=12){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_");	
	goto lose;
	}
        printf("\t\t%s\n",lacuna);
        printf("\nDigite uma letra: ");
        scanf("%c",&letra);
		j=0;
        for(i=0; i<len_palavra; i++){
            if (letra == palavra[i]){
				j++; 
				lacuna[i] = letra;
            }
        }
    j == 0 ? erros++ : erros--; 
    if(strcmp(palavra,lacuna) == 0){
	exec = 0;
	printf("\nParabéns %s. Você ganhou!\n\n",player1);
	printf("A palavra era %s\n\n",palavra);
	system("PAUSE");
	return 0;
	}   
}	lose:
	exec = 0;
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_\t\t%s",lacuna);
	printf("\n\nNão foi dessa vez %s. Você perdeu o jogo!",player1);
	printf("\n\nA palavra era %s.\n",palavra);
    return 0;
}
