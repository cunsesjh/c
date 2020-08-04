//
//  main.c
//  22-打印素数
//
//  Created by edz on 2020/8/4.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    int j;
    int isPrime=1;
    for (j=2; j<=n/2; j++) {
        if (n%j==0) {
            isPrime=0;
            break;
           }
    }
    if ((isPrime==1) && (n != 1)) {
        return true;;
    }else{
        return false;;
    }
}



int main(int argc, const char * argv[]) {
    int i;
    int count=0;
    for (i=1; i<=100; i++) {
        if ((isPrime(i))) {
            printf("%4d",i);
            count++;
            if (count%10==0) {
                printf("\n");
            }
        }
    }
    return 0;
}
