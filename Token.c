//
//  Token.c
//  
//
//  Created by Castro Bouquet Ildefonso on 26/10/2020.
//

/* Libraries */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    system("clear");
    int i=0;
    float str[5][2],a;
    char array[16]="2,543.123,45,75";
    char s[2]=",";
    char *token,*ptr;
    for(token=strtok_r(array,s,&ptr);token;token=strtok_r(NULL,s,&ptr))
    {
        a=atof(token);
        printf("Valor de token: %s\n",token);
        printf("Valor de a: %f\n\n",a);
        str[0][i]=a;
        i++;
        if(i==4)
        {
            break;
        }
    }
    printf("valores en el arreglo: %f, %f\n",str[0][0],str[0][1]);
}