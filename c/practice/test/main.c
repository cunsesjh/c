
//
//  main.c
//  hw-char_count_switch
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int main(void)
{
    int n=1000;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    while (n<10000 && n> 999) {
        d=n%10;
        c=(n%100-d)/10;
        b=(n%1000-n%100)/100;
        a=(n-n%1000)/1000;
        if (pow(a, 4)+pow(b, 4)+pow(c, 4)+pow(d, 4) == n) {
            printf("%d ",n);
        }
        n++;
    }
    
    return 0;
}
