//
//  main.c
//  07-bank
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int money,year;
    double rate;
    double sum;
    scanf("%d%d%lf",&money,&year,&rate);
    sum=money*pow((1+rate), year);
    printf("本息和为：%.2f\n",sum);
    return 0;
}
