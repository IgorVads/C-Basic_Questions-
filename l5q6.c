#include<stdio.h>
#include<locale.h>
//Fahrenheit para Celsius
int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, f;
	printf("Digite a temperatura em Fahrenheit: \n");
	scanf("%f", &f);
	c = (f - 32) / 1.8;
	printf("A temperatura convertida para Celsius é: %.1f. \n", c);
	return(0);
}