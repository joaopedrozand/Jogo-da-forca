#include<stdio.h>
#include<locale.h>
int main (){
	int erros=0;
	start:
	system("cls");	
	printf(" +-------+\n |       |\n |       |\n |\n |\n |\n_|_\n\n");
	if(erros==1){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |\n |\n_|_\n\n");	
	}else if(erros==2){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |       |\n |\n_|_\n\n");
	}else if(erros==3){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\n |\n_|_\n\n");
	}else if(erros==4){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |\n_|_\n\n");	
	}else if(erros==5){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      /\n_|_\n\n");
	}else if(erros==6){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_\n\n");
	}
	system("PAUSE");
	erros++;
	goto start;
	return 0;
}
