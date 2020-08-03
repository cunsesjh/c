//
//  main.c
//  17-pi_while
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double item=1.0;
    int flag=1;
    double sum=0;
    int fenmu = 1;
    while (fabs(item)>=0.0001) {
        sum = sum +item;
        flag=-flag;
        fenmu=fenmu+2;
        item=flag*(1.0/fenmu);
    }
    sum=sum+item;
    printf("pi is %.8lf\n",sum*4);
    return 0;
}
