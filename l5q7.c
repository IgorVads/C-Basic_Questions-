#include<stdio.h>
#include<locale.h>
#include<math.h>
//Cubo de um n�mero
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, x;
	printf("Digite um n�mero: \n");
	scanf("%i", &n);
	x = pow(n, 3);
	printf("O cubo de %i �: %i. \n", n, x);
	return(0);
}
