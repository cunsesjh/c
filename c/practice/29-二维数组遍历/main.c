//
//  main.c
//  29-二维数组遍历
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    int a[3][2];
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            a[i][j]=rand()%100;
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    int iMin=0;
    int jMin=0;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            if (a[i][j]<a[iMin][jMin]) {
                iMin=i;
                jMin=j;
            }
        }
    }
    printf("a[%d][%d]=%d\n",iMin,jMin,a[iMin][jMin]);
    
    
    return 0;
}
