//
//  main.c
//  24-pi函数
//
//  Created by edz on 2020/8/4.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double pi(double e){
    int flag=1;
    int fenmu=1;
    double item=1.0;
    double sum=0;
    
    while (fabs(item)>=e) {
        sum=sum+item;
        fenmu=fenmu+2;
        flag=-flag;
        item=flag*1.0/fenmu;
    }
    sum=sum+item;
    return sum;
}




int main(int argc, const char * argv[]) {
    double e;
    scanf("%lf",&e);
    printf("sum = %.8lf\n",pi(e)*4);
    return 0;
}
