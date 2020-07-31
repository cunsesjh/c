//
//  main.c
//  04-tem
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int f;
    int c;
    scanf("%d",&f);
    //整数除法得到的结果还是整数
    c = 5*(f-32)/9;
    //占位和后面的变量个数需要匹配
    printf("%d对应的摄氏温度是%d\n",f,c);
    return 0;
}
