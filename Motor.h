//
//  Motor.h
//  
//
//  Created by Castro Bouquet Ildefonso on 29/10/2020.
//
#ifndef Motor_h
#define Motor_h

#include <stdio.h>

#ifdef Motor_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN void format(char ***ptr,float ***ptr2,int column);

#undef Motor_IMPORT
#undef EXTERN

#endif /* Motor_h */
