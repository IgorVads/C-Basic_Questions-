#include<stdio.h>
#include<locale.h>
//Celsius para Fahrenheit
int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, f;
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f", &c);
	f = (c * 1.8) + 32;
	printf("A temperatura convertida para Fahrenheit é: %.1f. \n", f);
	return(0);
}