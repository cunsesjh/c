//
//  main.c
//  hw-斐波那契
//
//  Created by edz on 2020/8/4.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x1,x2,x,i;
    x1=x2=1;
    printf("%d  %d  ",x1,x2);
    for (i=3; i<=10; i++) {
        x=x1+x2;
        printf("%d  ",x);
        x1=x2;
        x2=x;
    }
    printf("\n");
    return 0;
}
