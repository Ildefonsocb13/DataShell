//
//  Funciones.h
//  
//
//  Created by Castro Bouquet Ildefonso on 27/09/2020.
//  Created by Venegas Ramirez Giovanni Josue on 27/09/2020.
//
#ifndef Funciones_h
#define Funciones_h

#include <stdio.h>

#ifdef Funciones_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN char menu();

EXTERN void askFile(char *fileName[]);

EXTERN void format();

#undef Funciones_IMPORT
#undef EXTERN

#endif /* Funciones_h */
