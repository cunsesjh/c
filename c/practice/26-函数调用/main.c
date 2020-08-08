//
//  main.c
//  26-函数调用
//
//  Created by edz on 2020/8/5.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int sqr(int x){
    return x*x;
}

int pow4(int x){
    int y;
    y=sqr(sqr(x));
    return y;
}


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    printf("%d\n",pow4(n));
    return 0;
}
