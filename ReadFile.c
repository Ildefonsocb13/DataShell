//
//  ReadFile.c
//  
//
//  Created by Castro Bouquet Ildefonso on 24/10/2020.
//

/* Libraries */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
This function read a file with "M x N" quantity data,
and asign it into a doble pointer ptr.
*/
int readFile (char fileName[],char ***ptr)
{
    /*Variables*/

    char c;
    int i=0,size=0,j=0,column=0;
    FILE *file;
    
    
    /*Procces*/

    file=fopen(fileName,"r");
    if(file==NULL)
    {
        printf("El archivo llamado \"%s\" no se encontro.\n",fileName);
        exit(1);
    }
    while((c = getc(file)) != EOF)
    {
        if(c=='\n')
        {
            column++;    
        } 
    }
    if(column==0)
    {
        printf("columnador es = a cero");
        exit(0);
    }
    (*ptr)=malloc((column)*(sizeof(char *)));
    rewind(file);
    for(i=0;i<column;i++)
    {
        while((c = getc(file)) != '\n')
        {
            size++;
        }
        (*ptr)[i]=malloc(size+1);
        rewind(file);
        if(column>0)
        {
            for(j=0;j<i;j++)
            {
                fgets((*ptr)[i],size,file);
            }
        }
        fgets((*ptr)[i],size,file);
    }
    for(i=0;i<column;i++)
    {
        printf("%s",(*ptr)[i]);
    }
    fclose(file);
    return column;
}