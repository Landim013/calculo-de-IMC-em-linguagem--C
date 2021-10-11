#include <stdio.h>
int main ()
{
float altura, peso, imc;
printf("digite sua altura\n");
scanf("%f",&altura);
printf("digite seu peso\n");
scanf("%f",&peso);
imc= peso/ (altura*altura);
	if(imc>18.5,imc<24.9){
	printf("seu indice de massa corporal esta dentro da media de saude:");
	printf(" seu imc e de :");
	printf("%.2f\n", imc);
	printf("parametros: imc 18.5 a 24.9");}
	if (imc<18.5,imc>24.9){
		printf("seu indice de massa corporal nao esta dentro dos parametros indicado pelo ministerio da saude!. seu imc e de %2.f\n",imc);
	printf("parametros de imc; 18.5 a 24.9");}

return(0);
}

