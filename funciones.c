#include <stdio.h>
#include "funciones.h"


int ingresarDatos(int a, int b){
    int num=0;
    printf("Ingrese el numero de la posicion %d %d: ",a,b);
    scanf("%d",&num);
    return num;
}
