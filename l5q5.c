#include<stdio.h>
#include<locale.h>
//Dobro de um n�mero e triplo de outro
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	printf("Digite um n�mero: \n");
	scanf("%i", &x);
	printf("Digite outro n�mero: \n");
	scanf("%i", &y);
	printf("O dobro de %i �:%i. \n", x, x * 2);
	printf("O triplo de %i �:%i. \n", y, y * 3);
	return(0);
}