#include<stdio.h>
#include<locale.h>
//Convers�o real para d�lar
int main(){
	setlocale(LC_ALL, "Portuguese");
	float d, r, c;
	d = 5;
	printf("O valor do d�lar atualmente � $%.1f. \n", d);
	printf("Informe o valor em real para ser convertido: \n");
	scanf("%f", &r);
	c = r * d;
	printf("O resultado da convers�o foi: $%.1f. \n", c);
	return(0);
}
	