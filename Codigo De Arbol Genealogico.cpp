#include <stdio.h>
#include <stdlib.h>

int main() {
	int op;
	printf("\nArias Joceline\n");
	printf("\nArbol Genealogico\n");
	printf("\n1. Generacion 1\n");
	printf("\n2. Generacion 2\n");
	printf("\n3. Generacion 3\n");
	printf("\n4. Generacion 4\n");
	printf("\n5. Generacion 5\n");
	scanf("%d,&op");
	switch(op)
	{
		case 1:
			printf("\nGeneracion 1");
			printf("Bisabuelos Paternos");
			printf("Facundo Pacheco");
			printf("Estefania Chavez");
			printf("Aurelio Arias");
			printf("Secundina Ochoa");
			printf("Bisabuelos Maternos");
			printf("Marcial Martinez");
			printf("Herminia Calixto");
			printf("Loreto Martinez");
			printf("Manuel Hernandez");
			break;
		case 2:
			printf("\nGeneracion 2");
            printf("Abuelos y hermanos Paternos");
            printf("Maria Elena Pacheco");
            printf("Gudelia Pacheco");
            printf("Federico Arias");
            printf("Francisco Arias");
            printf("Abuelos y hermanos Maternos");
            printf("Benjamin Martinez");
            printf("Alvaro Martinez");
            printf("Josefina Martinez");
			break;
	    case  3 :
            printf ("Generacion 3\n");
            printf("Mi papa y sus hermanos");
            printf("Mauricio Arias");
            printf("Eloisa Arias");
            printf("Aurelio Arias");
            printf("Maria de los Angeles Arias ");
            printf("Mi mama y sus hermanos");
            printf("Ana Martinez");
            printf("Mario Martinez");
            printf("Josefina Martinez");
            printf("Alejandro Martinez");
            break ;
        case  4 :
            printf ("Generacion 4\n");
            printf("Primos y Hermanos (pondre solo hermanos son muchos)");
            printf("Diana Arias");
            printf("Mariana Arias");
            printf("Mauricio Arias");
            printf("Omar Arias");
            printf("Juan Arias");
            printf("Joceline Arias");
            printf("Jessica Arias");
            printf("Evelyn Arias");
            break ;
        case  5 :
            printf ("Generacion 5 \n");
            printf("Mis sobrinitos");
            printf("Ricardo Cordova");
            printf("Elora Vazquez");
            printf("Aitana Vazquez");
            printf("Sherlyne Arias");
            printf("Ian Arias");
            printf("Valeria Arias");
            printf("Andres Arias Yang");
            printf("Santiago Arias");
            break ;
	}
	return 0;
}
