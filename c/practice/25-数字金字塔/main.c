//
//  main.c
//  25-数字金字塔
//
//  Created by edz on 2020/8/4.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
void pyramid(int n){
    int i;
    for (i=1; i<=n; i++) {
        //打印每一行的空格
        int k;
        for (k=0; k<n-i; k++) {
            printf(" ");
        }
        for (k=0; k<i; k++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}

int main() {
    pyramid(5);
    return 0;
}
