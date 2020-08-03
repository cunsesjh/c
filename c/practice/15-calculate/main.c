//
//  main.c
//  15-calculate
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x,y,slt;
    char c;
    printf("请输入一个算术表达式：");
    scanf("%f%c%f",&x,&c,&y);
    switch (c) {
        case '+':
            slt = x+y;
            break;
        case '-':
            slt = x-y;
            break;
        case '*':
            slt = x*y;
            break;
        case '/':
            slt = x/y;
            break;
        default:
            printf("请输入一个运算符");
            return -1;
    }
    printf("计算结果为：%.2f\n",slt);
    return 0;
}
