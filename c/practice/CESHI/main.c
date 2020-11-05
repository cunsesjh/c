//
//  main.c
//  CESHI
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

double my_atof(char *nptr){
    double value = 0;
    while (*nptr == ' '|| *nptr == '.')
        nptr++;
    while ((*nptr-'0') < 10)
      value = value*10 + (*nptr++ - '0');
    
    return value;
}
