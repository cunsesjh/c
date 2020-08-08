//
//  main.c
//  36-指针-翻转数组
//
//  Created by edz on 2020/8/7.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void printArray(int a[],int n){
    for (int i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}


void reverse(int *a, int n){
    
    for (int i=0,j=n-1; i<j; i++,j--) {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        
    }
    
    
    
}




int main(int argc, const char * argv[]) {
    int a[10];
    for (int i=0; i<10; i++) {
        a[i]=i;
    }
    printArray(a, 10);
    reverse(a+3, 4);
    printArray(a, 10);
    return 0;
}
