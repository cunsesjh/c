//
//  main.c
//  06-fen
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


float dao(float x){
    float dao;
    if (x!=0) {
        dao=1.0/x;
    }else {
        dao=0;
    }
    return dao;
}


int main(int argc, const char * argv[]) {
    float x;
    printf("请输入x：");
    scanf("%f",&x);
    printf("f(%.2f)=%.2f\n",x,dao(x));
    return 0;
}


