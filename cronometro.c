#include<stdio.h>
#include<time.h>
int main (){
	//antes do código
	clock_t t0, tf;
   double tempo_gasto;
   
   //depois do código
   t0 = clock();
   tf = clock();
   tempo_gasto = ((double)(tf - t0))/CLOCKS_PER_SEC;
   printf("Tempo gasto: %lf s\n", tempo_gasto);
}
