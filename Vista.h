//
//  Vista.h
//  
//
//  Created by Castro Bouquet Ildefonso on 08/11/2020.
//
#ifndef Vista_h
#define Vista_h

#include <stdio.h>

#ifdef Vista_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN char menu(char *fileName);

EXTERN int readFile (char fileName[],char ***ptr);

#undef Vista_IMPORT
#undef EXTERN

#endif /* Vista_h */