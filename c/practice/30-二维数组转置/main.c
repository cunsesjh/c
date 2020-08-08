//
//  main.c
//  30-二维数组转置
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COLUMN 4


int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    int a[ROW][COLUMN];
    for (int i=0; i<ROW; i++) {
        for (int j=0; j<COLUMN; j++) {
            a[i][j]=rand()%100;
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }


    
    for (int i=0; i<ROW; i++) {
        for (int j=0; j<i; j++) {
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
            }
        }
    
    printf("\n");

    for (int i=0; i<ROW; i++) {
        for (int j=0; j<COLUMN; j++) {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
