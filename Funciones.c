//
//  Funciones.c
//  
//
//  Created by Castro Bouquet Ildefonso on 29/10/2020.
//

/* Libraries */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* funciones.c -- Functions */

/*Vista*/
/* Prints a menu for more visual to the user, asking for name of the file*/
void menu(char fileName[])
{
    int x;
    char name[40];
    FILE *fp;

    strcpy(fileName,"DataExample.txt");//Example data csv

    do
    {
        printf("====================================================\n");
        printf("=                       MENU                       =\n");
        printf("=  Next option will read file \" DataExample.txt \"  =\n");
        printf("=         if no other name was introduced.         =\n");
        printf("=1) Read File                                      =\n");
        printf("=2) Introduce Name of File                         =\n");
        printf("=3) Exit Program                                   =\n");
        printf("=                                                  =\n");
        printf("====================================================\n");
        printf("Input an option: ");
        scanf("%d",&x);
        if(x==1)
        {
            return;
        }
        if(x==2)
        {
            printf("Introduce Name of file to read: ");
            gets(name);
            fp=fopen(name,"r");
            if(fp==NULL)
            {
                printf("El archivo llamado \"%s\" no se encontro.\n",name);
            }
            else
            {
                strcpy(fileName,name);
                fclose(fp);
            }
        }
        if(x==3)
        {
            printf("You choose to close Program. Bye Bye.\n");
            exit(2);
        }
    }while(x!=1);
}

/* This Function takes a char double ptr and converts into a float double ptr*/
void format(char ***ptr,float ***ptr2,int column)
{
    int i=0,j=0;
    float a;
    char s[2]=",";
    char *token, *temp;
    (*ptr2)=(float **) malloc(sizeof(float *)*column);
    for(i=0;i<column;i++)
    {
        (*ptr2)[i]= (float *) malloc(sizeof(float));
    }
    i=0;
    for(j=0;j<column;j++)
    {
        for(token=strtok_r((*ptr[j]),s,&temp);token;token=strtok_r(NULL,s,&temp))
        {
            if(i>0)
            {
                (*ptr2)[j]=(float*) realloc((*ptr2)[j],(i+1)*sizeof(float));
            }
            a=atof(token);
            printf("Valor de token: %s\n",token);//visualizar valores
            printf("Valor de a: %f\n\n",a);//
            (*ptr2)[j][i]=a;
            i++;
        }
        i=0;
    }
    for(j=0;j<column;j++)
    {
        for(i=0;i<=200;i++)
        {
            if((*ptr2)[j][i]!=NULL)
            {
                if(i=0)
                {
                    printf("%f",(*ptr2)[j][i]);
                }
                else
                {
                    printf(", %f",(*ptr2)[j][i]);
                }
            }
            else
            {
                break;
            }
        }
    }
}

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