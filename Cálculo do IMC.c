#include<stdio.h>
#include<locale.h>
#include<math.h>

/*Um programa que solicita e lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais 
após a vírgula. O IMC é calculado por meio da seguinte fórmula: IMC = PESO/ALTURA^2 */

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float imc, a, p;
	
	//Solicitando o peso e a altura do usuário
	printf("Informe seu peso: \n");
		scanf("%f", &p);
	
	printf("Informe sua altura: \n");
		scanf("%f", &a);
	
	imc = p / pow(a , 2);
	
	printf("Seu IMC é %.1f. \n", imc);
	return(0);
}
