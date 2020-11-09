//
//  Motor.c
//  
//
//  Created by Castro Bouquet Ildefonso on 29/10/2020.
//

/* Libraries */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Motor.c -- Functions */

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
    }/*
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
    }*/
}