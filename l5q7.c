#include<stdio.h>
#include<locale.h>
#include<math.h>
//Cubo de um número
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, x;
	printf("Digite um número: \n");
	scanf("%i", &n);
	x = pow(n, 3);
	printf("O cubo de %i é: %i. \n", n, x);
	return(0);
}
