#include <stdio.h>

/* EJERCICIO 10 : Defina una función que convierte una cadena de caracteres, pasada por referencia, a mayúsculas.

Notas:

a. Según el código ASCII => C+32=c. Donde c pertenece al conjunto de caracteres alfabéticos en minúscula y C en mayúscula.

b. La finalización de una cadena de caracteres se representa mediante ́/0 ́
 */

#define MAX 50

void convertir(char cadena[]);

void convertir(char cadena[MAX])
{
    int i=0;
    for(i=0; *(cadena+i)!='\0' ; i++) // Recorre todo el string
    {
        if(*(cadena+i)>='a'&&*(cadena+i)<='z') // Si el caracter es mayor que a y menor que z entonces
        {
            *(cadena+i)=*(cadena+i)-32;  // Le resto 32 (lo paso a mayuscula en ascii)
        }
    }
}

int main() {
    char cadena[MAX];
    printf("Ingrese una cadena de caracteres en minuscula y se transformara en mayuscula : \n");
    gets(cadena);
    printf("Texto Original : %s",cadena);
    convertir(cadena);
    printf("\nTexto Modificado : %s",cadena);
    return 0;
}
