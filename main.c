#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "conio2.h"



void dese_linha(int x, int y, int x2, int y2){
	char c = 3;
	gotoxy(x,y);
	printf("%c",c);
	if(x2 != 0){
		gotoxy(x2,y2);
		printf("%c",c);	
	}		
}

void dese_linha_full(int x, int y, int x2, int y2){
	char c = 3;
	int i=0;
	for(i=x; i <x2; i++)
	{	
		gotoxy(i,y);
		printf("%c",c);
		
	}
}

void desenha_coracao(int x, int y){
	

	dese_linha(x+6,y,x+7,y);
	dese_linha(x+8,y,x+12,y);
	dese_linha(x+13,y,x+14,y);
	dese_linha(x+5,y+1,x+9,y+1);
	dese_linha(x+11,y+1,x+15,y+1);
	dese_linha(x+4,y+2,x+10,y+2);
	dese_linha(x+16,y+2,0,0);
	dese_linha(x+4,y+3,x+16,y+3);
	dese_linha(x+4,y+4,x+16,y+4);
	dese_linha(x+5,y+5,x+15,y+5);
	dese_linha(x+6,y+6,x+14,y+6);
	dese_linha(x+7,y+7,x+13,y+7);
	dese_linha(x+8,y+8,x+12,y+8);
	dese_linha(x+9,y+9,x+11,y+9);
	dese_linha(x+10,y+10,0,0);
}

void desenha_coracao_lento(int x, int y){
	

	dese_linha(x+6,y,x+7,y);
	dese_linha(x+8,y,x+12,y);
	usleep(100000);
	dese_linha(x+13,y,x+14,y);
	dese_linha(x+5,y+1,x+9,y+1);
	usleep(100000);
	dese_linha(x+11,y+1,x+15,y+1);
	dese_linha(x+4,y+2,x+10,y+2);
	usleep(100000);
	dese_linha(x+16,y+2,0,0);
	dese_linha(x+4,y+3,x+16,y+3);
	usleep(100000);
	dese_linha(x+4,y+4,x+16,y+4);
	dese_linha(x+5,y+5,x+15,y+5);
	usleep(100000);
	dese_linha(x+6,y+6,x+14,y+6);
	dese_linha(x+7,y+7,x+13,y+7);
	usleep(100000);
	dese_linha(x+8,y+8,x+12,y+8);
	dese_linha(x+9,y+9,x+11,y+9);
	usleep(100000);
	dese_linha(x+10,y+10,0,0);
}

void preenche_coracao(int x, int y){
			
			
	dese_linha_full(x+6,y,x+9,y);
	dese_linha_full(x+12,y,x+15,y);
	dese_linha_full(x+5,y+1,x+10,y+1);
	dese_linha_full(x+11,y+1,x+16,y+1);
	dese_linha_full(x+4,y+2,x+10,y+2);
	dese_linha_full(x+4,y+2,x+17,y+2);
	dese_linha_full(x+4,y+3,x+17,y+3);
	dese_linha_full(x+4,y+4,x+17,y+4);
	dese_linha_full(x+5,y+5,x+16,y+5);
	dese_linha_full(x+6,y+6,x+15,y+6);
	dese_linha_full(x+7,y+7,x+14,y+7);
	dese_linha_full(x+8,y+8,x+13,y+8);
	dese_linha_full(x+9,y+9,x+12,y+9);
	dese_linha_full(x+10,y+10,x+11,y+10);
	
}

void preenche_coracao_lento(int x, int y){
			
			
	dese_linha_full(x+6,y,x+9,y);
	dese_linha_full(x+12,y,x+15,y);
		usleep(100000);
	dese_linha_full(x+5,y+1,x+10,y+1);
	dese_linha_full(x+11,y+1,x+16,y+1);
		usleep(100000);
	dese_linha_full(x+4,y+2,x+10,y+2);
	dese_linha_full(x+4,y+2,x+17,y+2);
		usleep(100000);
	dese_linha_full(x+4,y+3,x+17,y+3);
	dese_linha_full(x+4,y+4,x+17,y+4);
		usleep(100000);
	dese_linha_full(x+5,y+5,x+16,y+5);
	dese_linha_full(x+6,y+6,x+15,y+6);
		usleep(100000);
	dese_linha_full(x+7,y+7,x+14,y+7);
	dese_linha_full(x+8,y+8,x+13,y+8);
		usleep(100000);
	dese_linha_full(x+9,y+9,x+12,y+9);
	dese_linha_full(x+10,y+10,x+11,y+10);
	
}

void desenha_tudo(){
	desenha_coracao(0, 1);
	desenha_coracao(26, 1);
	desenha_coracao(51, 1);
	desenha_coracao(13, 10);
	desenha_coracao(39, 10);
}

void desenha_tudo_lento(){
	desenha_coracao_lento(0, 1);
	desenha_coracao_lento(26, 1);
	desenha_coracao_lento(51, 1);
	desenha_coracao_lento(13, 10);
	desenha_coracao_lento(39, 10);
}

void preenche_tudo(){
	preenche_coracao(0,1);
	preenche_coracao(26,1);
	preenche_coracao(51,1);
	preenche_coracao(13,10);
	preenche_coracao(39,10);
}

void preenche_tudo_lento(){
	preenche_coracao_lento(0,1);
	preenche_coracao_lento(26,1);
	preenche_coracao_lento(51,1);
	preenche_coracao_lento(13,10);
	preenche_coracao_lento(39,10);
}

void escreve_amor(){
	
	gotoxy(57,5);
	printf("I LOVE U ");
	
	gotoxy(6,5);
	printf("I LOVE U ");
	
	gotoxy(32,5);
	printf("I LOVE U ");
	
	gotoxy(19,14);
	printf("I LOVE U ");
	
	gotoxy(45,14);
	printf("I LOVE U ");
	
	
}

void escreve_amor_lento(){
	
	usleep(500000);
	gotoxy(57,5);
	printf("I LOVE U ");
	usleep(500000);
	gotoxy(6,5);
	printf("I LOVE U ");
	usleep(500000);
	gotoxy(32,5);
	printf("I LOVE U ");
	usleep(500000);
	gotoxy(19,14);
	printf("I LOVE U ");
	usleep(500000);
	gotoxy(45,14);
	printf("I LOVE U ");
	usleep(500000);
	
}
	

int main() {
int contador = 0;
  int cont = 0;
  char valor1[100];
  int x = 1;  
  int y = 1;  
 
 

			  strcpy(valor1, "ATENCAO");
			 
			  for (contador = 0; contador < 300; contador++) {
			  for (cont = 0; cont < 10; cont++) {
			    textcolor((rand() %11)+1);
			    gotoxy(x, y);
			    printf("%s", valor1);
			    x = x + 7;          
			  }
			  usleep(1000);
			  x = 1;
			  y++;
			  if (y > 20) {
			  y = 1;
			  }
			}




textcolor(4);
desenha_tudo_lento();
preenche_tudo_lento();


usleep(300000);
textcolor(5);
preenche_tudo();

usleep(300000);
textcolor(6);
preenche_tudo();

usleep(300000);
textcolor(7);
preenche_tudo();

usleep(300000);
textcolor(3);
preenche_tudo();

usleep(300000);
textcolor(4);
preenche_tudo();

textcolor(15);
desenha_coracao_lento(0, 1);
preenche_coracao_lento(0,1);
desenha_coracao_lento(26, 1);
preenche_coracao_lento(26,1);
desenha_coracao_lento(51, 1);
preenche_coracao_lento(51,1);
desenha_coracao_lento(13, 10);
preenche_coracao_lento(13,10);
desenha_coracao_lento(39, 10);
preenche_coracao_lento(39,10);

textcolor(8);
preenche_tudo();

textcolor(4);
desenha_coracao(0, 1);
preenche_coracao(0,1);
desenha_coracao(26, 1);
preenche_coracao(26,1);
desenha_coracao(51, 1);
preenche_coracao(51,1);
desenha_coracao(13, 10);
preenche_coracao(13,10);
desenha_coracao(39, 10);
preenche_coracao(39,10);

for (contador = 0; contador <20; contador++){
	
int cor = rand() % 15 + 1;

textcolor(cor);
preenche_tudo();
usleep(100000);


}

textcolor(4);
preenche_tudo();

textcolor(15);
escreve_amor_lento();

for (contador = 0; contador <2000; contador++){
	
int cor = rand() % 15 + 1;

textcolor(cor);
desenha_tudo();
escreve_amor();
usleep(300000);


}
escreve_amor;
textcolor(4);
desenha_tudo();


gotoxy(50,20);
  return 0;
}
