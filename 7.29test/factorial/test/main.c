//
//  main.c
//  test
//
//  Created by edz on 2020/7/30.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
int main() {
    int i,j;
    for (i=0; i<=4; i++) {
        for (j=0; j<i; j++) {
            printf(" ");
        }
        for (j=4-j; j>0; j--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
