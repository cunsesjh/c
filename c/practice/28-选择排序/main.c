//
//  main.c
//  28-选择排序
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void find_min_swap(int a[],int n){
    int temp;
    int iMin=0;
    for (int i=1; i<n; i++) {
        if (a[i]<a[iMin]) {
            iMin=i;
        }
    }
    if (iMin != 0) {
        temp=a[0];
        a[0]=a[iMin];
        a[iMin]=temp;
    }
}

void printArray(int a[],int n){
    for (int i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
}


int main(int argc, const char * argv[]) {
    int size=10;
    int a[size];
    srand((unsigned int)time(NULL));
    for (int i=0; i<size; i++) {
        a[i]=rand()%100;
    }
    printArray(a, size);
    for (int i=0; i<size-1; i++) {
        printf("\n");
        find_min_swap(a+i, size-i);
        printArray(a, size);
    }

    
    printf("\n");
    return 0;
}
