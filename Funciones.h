//
//  Funciones.h
//  
//
//  Created by Castro Bouquet Ildefonso on 29/10/2020.
//
#ifndef Funciones_h
#define Funciones_h

#include <stdio.h>

#ifdef Funciones_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN char menu(char *fileName);

EXTERN void format(char ***ptr,float ***ptr2,int column);

EXTERN int readFile (char fileName[],char ***ptr);

#undef Funciones_IMPORT
#undef EXTERN

#endif /* Funciones_h */
