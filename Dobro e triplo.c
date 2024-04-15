#include<stdio.h>
#include<locale.h>
//Dobro de um número e triplo de outro
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	printf("Digite um número: \n");
	scanf("%i", &x);
	printf("Digite outro número: \n");
	scanf("%i", &y);
	printf("O dobro de %i é:%i. \n", x, x * 2);
	printf("O triplo de %i é:%i. \n", y, y * 3);
	return(0);
}
