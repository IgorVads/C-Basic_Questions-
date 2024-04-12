#include<stdio.h>
#include<locale.h>
#include<math.h>
//Cálculo do IMC de uma pessoa
int main(){
	setlocale(LC_ALL, "Portuguese");
	float imc, a, p;
	printf("Informe seu peso: \n");
	scanf("%f", &p);
	printf("Informe sua altura: \n");
	scanf("%f", &a);
	imc = p / pow(a , 2);
	printf("Seu IMC é %.1f. \n", imc);
	return(0);
}