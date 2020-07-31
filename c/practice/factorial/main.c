//
//  main.c
//  factorial
//
//  Created by edz on 2020/7/29.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int factorial(int n);
    int n;
    scanf("%d",&n);
    printf("%d的阶乘是:%d\n",n,factorial(n));
    return 0;
}


int factorial(int n){
    int i;
    int fact =1;
    for (i=1; i<=n; i++) {
        fact=fact*i;
    }
    return fact;
    
    
}
        
    
