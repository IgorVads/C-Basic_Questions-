#include<stdio.h>
#include<locale.h>
#include<math.h>
//C�lculo da �rea de uma circunfer�ncia
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, pi, r;
	pi = 3,14;
	printf("Informe o raio da circunfer�ncia: \n");
	scanf("%f", &r);
	a = pi * pow(r, 2);
	printf("O valor da �rea �: %.1f. \n", a);
	return(0);
}