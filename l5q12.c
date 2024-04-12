#include<stdio.h>
#include<locale.h>
//Cálculo do volume de uma caixa retangular
int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, l, a, v;
	printf("Digite o comprimento da caixa: \n");
	scanf("%f", &c);
	printf("Digite a largura da caixa: \n");
	scanf("%f", &l);
	printf("Digite a altura da caixa: \n");
	scanf("%f", &a);
	v = (c * l * a);
	printf("O volume da caixa é: %.1f \n", v);
	return(0);
}
	