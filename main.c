#include "stdio.h"
int main(){

	   int n=1;
	   printf("Ingrese el Número atómico: ");
	   scanf("%d",&n);
	int grupo;
	int periodo;
	switch(n) {
  	case 1:
		printf("Hidrogeno\n");
		printf("Símbolo: H\n");
		grupo=11;
		periodo=1;
		printf("Masa atómica: 1,00794\n");
		break;
  	case 2:
    	printf("Helio\n");
		printf("Símbolo: He\n");
        grupo=81;
		periodo=1;
        printf("Masa atómica: 4,002602\n");
		break;
  	case 3:
  		printf("Litio\n");
  		printf("Símbolo: Li\n");
  		grupo=11;
  		periodo=2;
  		printf("Masa atómica: 6,941\n");
  		break;
 	case 4:
 		printf("Berilio\n");
 		printf("Símbolo: Be\n");
 		grupo=21;
 		periodo=2;
 		printf("Masa atómica: 9,012182\n");
   	case 5:
		printf("Boro\n");
		printf("Símbolo: B\n" );
		printf("Masa atómica: 10,811\n");
		grupo=31;
		periodo=2;
   		 break;
  	case 6:
    	printf("Carbono\n");
    	printf("Símbolo: C\n");
    	printf("Masa atómica: 12,0107\n");
    	grupo=41;
    	periodo=2;
    	break;
  	case 7:
  		printf("Nitrógeno\n");
    	printf("Símbolo: N\n");
    	printf("Masa atómica: 14,0067\n");
    	grupo=51;
    	periodo=2;
    	break;
  	case 8:
  		printf("Oxígeno\n");
    	printf("Símbolo: O\n");
    	printf("Masa atómica: 15,99994\n");
    	grupo=61;
    	periodo=2;
    	break;
  	case 9:
  		printf("Flúor\n");
    	printf("Símbolo: F\n");
    	printf("Masa atómica: 18,9984032\n");
    	grupo=71;
    	periodo=2;
    	break; 
  	case 10:
  		printf("Neón\n");
    	printf("Símbolo: Ne\n");
    	printf("Masa atómica: 20,1797\n");
    	grupo=81;
    	periodo=2;
    	break;
  	case 11:
  		printf("Sodio\n");
    	printf("Símbolo: Na\n");
    	printf("Masa atómica: 22.989769\n");
    	grupo=11;
    	periodo=3;
    	break;
  	case 12:
  		printf("Magnesio\n");
    	printf("Símbolo: Mg\n");
    	printf("Masa atómica: 24,3050\n");
    	grupo=21;
    	periodo=3;
    	break;
  	case 13:
  		printf("Aluminio\n");
    	printf("Símbolo: Al\n");
    	printf("Masa atómica: 26,9815386\n");
    	grupo=31;
    	periodo=3;
    	break;
  	case 14:
  		printf("Silicio\n");
    	printf("Símbolo: Si\n");
    	printf("Masa atómica: 28,0855\n");
    	grupo=14;
    	periodo=3;
    	break;
  	case 15:
  		printf("Fósforo\n");
    	printf("Símbolo: P\n");
    	printf("Masa atómica: 30,973762\n");
    	grupo=51;
    	periodo=3;
    	break;
  	case 16:
  		printf("Azufre\n");
    	printf("Símbolo: S\n");
    	printf("Masa atómica: 32,065\n");
    	grupo=61;
    	periodo=3;
    	break;
  	case 17:
  		printf("Cloro\n");
    	printf("Símbolo: Cl\n");
    	printf("Masa atómica: 35,453\n");
    	grupo=71;
    	periodo=3;
    	break;
  	case 18:
  		printf("Argón\n");
    	printf("Símbolo: Ar\n");
    	printf("Masa atómica: 39,948\n");
    	grupo=81;
    	periodo=3;
    	break;
 	case 19:
  		printf("Potasio\n");
    	printf("Símbolo: K\n");
    	printf("Masa atómica: 39,0983\n");
    	grupo=11;
    	periodo=4;
    	break;
 	case 20:
  		printf("Calcio\n");
    	printf("Símbolo: Ca\n");
    	printf("Masa atómica: 40,078\n");
    	grupo=21;
    	periodo=4;
    	break;
   	}
	if(grupo==11){
		printf("Grupo 1: Metales alcalinos\n");
	}
	if(grupo==21){
		printf("Grupo 2: Metales alcalinotérreos\n");
	}
	if(grupo==31){
		printf("Grupo 13: Elementos Térreos\n");
	}
	if(grupo==41){
		printf("Grupo 14: Elementos carbonoides\n");
	}
	if(grupo==51){
		printf("Grupo 15: Elementos nitrogenoides\n");
	}
	if(grupo==61){
		printf("Grupo 16: Elementos calcógenos o anfígenos\n");
	}
	if(grupo==71){
		printf("Grupo 17: Haógenos\n");
	}
	if(grupo==81){
		printf("Grupo 18: Gases Nobles\n");
	}
	printf("Periodo %d\n",periodo);
}
