//
//  ReadFile.c
//  
//
//  Created by Castro Bouquet Ildefonso on 24/10/2020.
//
#ifndef ReadFile_h
#define ReadFile_h

#include <stdio.h>

#ifdef ReadFile_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* ReadFile.h -- Function prototypes */

/*
This function read a file with "M x N" quantity data,
and asign it into a doble pointer ptr.
@param
    fileName(char): name of file
    ptr(char **): array
@returns
    column(int): how many columns they are in the file.
*/
EXTERN int readFile (char fileName[],char ***ptr);

#undef ReadFile_IMPORT
#undef EXTERN

#endif /* ReadFile_h */