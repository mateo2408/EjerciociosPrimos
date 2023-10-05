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
        return 0;
    }

    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d no es un numero primo.\n", num);
            return 0;
        }
    }
    printf("%d es un numeros primo.\n", num);
    return 0;
}