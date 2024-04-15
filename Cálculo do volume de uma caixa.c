#include<stdio.h>
#include<locale.h>
//Cálculo do volume de uma caixa retangular
int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, l, a, v;
	//Solicitando as dimensões da caixa
	printf("Digite o comprimento, a largura, e a altura da caixa:");
	scanf("%f %f %f", &c, &l, &a);
	v = (c * l * a);
	printf("O volume da caixa é: %.1f \n", v);
	return(0);
}
	
