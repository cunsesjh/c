//
//  main.c
//  08-pi_sum
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

double pi(int n){
    
    double sum = 0;
    int i;
    double item;
    int flag=1;
    for (i=1; i<=n; i++) {
        item = flag*1.0/(2*i-1);
        sum = sum+item;
        flag=-flag;
    }
    return sum*4;
}


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    printf("前%d项的和为：%lf\n",n,pi(n));
    return 0;
}
