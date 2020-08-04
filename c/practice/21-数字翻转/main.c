//
//  main.c
//  21-数字翻转
//
//  Created by edz on 2020/8/4.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    if (x==0) {
        printf("0");
    } else {
        while (x!=0) {
            printf("%d",x%10);
            x=x/10;
        }
    }
    printf("\n");
    return 0;
}
