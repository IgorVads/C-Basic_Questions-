#include<stdio.h>
#include<locale.h>
#include<math.h>
//Cálculo da área de uma circunferência
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, pi, r;
	pi = 3,14;
	printf("Informe o raio da circunferência: \n");
	scanf("%f", &r);
	a = pi * pow(r, 2);
	printf("O valor da área é: %.1f. \n", a);
	return(0);
}
