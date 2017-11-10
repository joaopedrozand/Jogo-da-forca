#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main (){
    int i,len_palavra,erros=0,j,exec=1;
    char lacuna[20]="_";
    char letra; 
    char palavra[]="arroz"; 

    setlocale(LC_ALL,"PORTUGUESE");
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
	goto fim;
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
	printf("\nVocê ganhou!");
	system("PAUSE");
	}else exec = 1;
    
}	fim:
	exec = 0;
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_\t\t%s",lacuna);
	printf("\n\nVocê perdeu o jogo!");
	printf("\n\nA palavra era %s.\n",palavra);
    return 0;
}
