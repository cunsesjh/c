//
//  main.c
//  test
//
//  Created by edz on 2020/7/30.
//  Copyright © 2020 edz. All rights reserved.
//
/*
判断输入的整数的符号
*/
#include <stdio.h>
void pyramid(int n){
    int i;
    for (i=1; i<=n; i++) {
        //打印每一行的空格
        int k;
        for (k=1; k<=n-i; k++) {
            printf(" ");
        }
        for (k=1; k<=i; k++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}

int main() {
    pyramid(5);
    return 0;
}

