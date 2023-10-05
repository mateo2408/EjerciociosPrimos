/*Construir un programa en lenguaje C que calcule si un número entero 
ingresado por el usuario es un número primo.*/
//Mateo Cisneros
#include <stdio.h>

main(){
    int num;
    printf("Introduce un numero -> ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("%d no es un numero primo.\n", num);
    }
    
}