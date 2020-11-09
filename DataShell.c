//
//  DataShell.c
//  
//
//  Created by Castro Bouquet Ildefonso on 26/10/2020.
//

/* Libraries */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Custom Libraries */
#include"Funciones.h"

/* Main Function */
int main (void)
{
    /* Variables */
    char fileName[40];
    char **ptr;
    float **ptr2;
    int column,i,j;

    /* Process */
    menu(fileName);
    column=readFile(fileName,&ptr);//read file and save it on array
    /*
    printf("--------------");
    for(i=0;i<column;i++)
    {
        printf("%s",ptr[i]);
    }
    */
    format(&ptr,&ptr2,column);//use token to separate array
    for(j=0;j<column;j++)
    {
        for(i=0;i<=200;i++)
        {
            if(ptr2[j][i]!=NULL)
            {
                if(i=0)
                {
                    printf("%f",ptr2[j][i]);
                }
                else
                {
                    printf(", %f",ptr2[j][i]);
                }
            }
            else
            {
                break;
            }
        }
    }
}