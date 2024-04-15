#include<stdio.h>
#include<locale.h>
//Conversão real para dólar
int main(){
	setlocale(LC_ALL, "Portuguese");
	float d, r, c;
	d = 5;
	printf("O valor do dólar atualmente é $%.1f. \n", d);
	printf("Informe o valor em real para ser convertido: \n");
	scanf("%f", &r);
	c = r * d;
	printf("O resultado da conversão foi: $%.1f. \n", c);
	return(0);
}
	
