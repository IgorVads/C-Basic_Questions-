#include<stdio.h>
#include<locale.h>
//Sucessor e antecessor
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	//Solicita um número
	printf("Digite um número.\n");
	scanf("%i", &i);
	printf("O antecessor de %i é: %i\n", i, i -1);
	printf("O sucessor de %i é: %i\n", i, i + 1);
	return(0);
}
