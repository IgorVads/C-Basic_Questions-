#include<stdio.h>
#include<locale.h>
//Sucessor e antecessor
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	printf("Digite um n�mero.\n");
	scanf("%i", &i);
	printf("O antecessor de %i �: %i\n", i, i -1);
	printf("O sucessor de %i �: %i\n", i, i + 1);
	return(0);
}