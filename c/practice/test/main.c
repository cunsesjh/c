//
//  main.c
//  test
//
//  Created by edz on 2020/7/30.
//  Copyright © 2020 edz. All rights reserved.
//

/*
显示所输入的月份所处的季节
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;
    int i;
    scanf("%d",&num);
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            break;;
        }
    }
    if ((i<=sqrt(num))||(num==1)) {
        printf("不是素数");
    }else{
        printf("是素数");
    }
    return 0;
}
