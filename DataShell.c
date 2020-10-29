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
#include"ReadFile.h"
int main (void)
{
    char fileName[20];
    char **ptr;
    int column,i;

    askFile(char *fileName[]);//get name of file

    column=readFile(fileName,&ptr);//read file and save it on array

    printf("--------------");
    for(i=0;i<column;i++)
    {
        printf("%s",ptr[i]);
    }

    separate();//use token to separate array
}