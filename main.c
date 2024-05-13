#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {


    int a[3][4] = {{0,0,0,0},
                 {0,0,0,0},
                 {0,0,0,0}};

    

    int b[4][2]={{0,0},
                   {0,0},
                   {0,0},
                   {0,0}};


    int k[3][2]={{0,0},{0,0},{0,0}};

     printf("ingrese la matriz a\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j]=ingresarDatos(i,j);
        }
        
    }

    printf("ingrese la matriz b\n");
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            b[i][j]=ingresarDatos(i,j);
        }
        
    }
    


    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 2; j++)
        {
            for (int z  = 0; z < 4; z++)
            {
                 k[i][j]+=a[i][z]*b[z][j];
            }
            printf("%d\t",k[i][j]);
        }
         printf("\n");
    }
    
     printf("--------------------------------\n");

    k[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0]+a[0][2]*b[2][0]+a[0][3]*b[3][0];
    k[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1]+a[0][2]*b[2][1]+a[0][3]*b[3][1];
    
    k[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0]+a[1][2]*b[2][0]+a[1][3]*b[3][0];
    k[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1]+a[1][2]*b[2][1]+a[1][3]*b[3][1];

    k[2][0]=a[2][0]*b[0][0]+a[2][1]*b[1][0]+a[2][2]*b[2][0]+a[2][3]*b[3][0];
    k[2][1]=a[2][0]*b[0][1]+a[2][1]*b[1][1]+a[2][2]*b[2][1]+a[2][3]*b[3][1];

    printf("%d\t%d\n",k[0][0],k[0][1]);
    printf("%d\t%d\n",k[1][0],k[1][1]);
    printf("%d\t%d\n",k[2][0],k[2][1]);

    return 0;
}