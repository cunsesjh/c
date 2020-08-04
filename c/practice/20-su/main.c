//
//  main.c
//  20-su
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,m;
    scanf("%d",&m);
    int isPrime=1;
    for (i=2; i<=m/2; i++) {
        if (m%i==0) {
            isPrime=0;
            break;
        }
    }
    if ((isPrime==1)&&(m!=1)) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
