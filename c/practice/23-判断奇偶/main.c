//  main.c
//  23-判断奇偶
//
//  Created by edz on 2020/8/4.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


int even(int n){
    if (n%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    if ((even(n)==1)) {
        printf("偶数");
    } else {
        printf("奇数");
    }
    printf("\n");
    return 0;
}
