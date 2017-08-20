#include "stdio.h"
int sel;
int chk=0;
int main(){
	printf("Que Va a ingresar?: \n");
	printf("1.-Nombre\n");
	printf("2.-Número atómico\n");
	printf("3.-Electronegatividad\n\n\n");
	while(1){
		printf("Ingrese un número del 1 al 3: ");
		scanf("%d",&sel);
		if(sel>4){
			printf("Tu numero es mayor de 3, intenta de nuevo\n");

		}
		else if(sel<1){
			printf("Tu numero es menor que 1, intenta de nuevo\n");
		}
		else{
		break;
		}
	}
	if(sel==1)
	printf("Ingrese El símbolo del elemento");



}
