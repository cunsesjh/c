//
//  main.c
//  factorial
//
//  Created by edz on 2020/7/29.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(void) {
   
    int n;
    int factorial(int n);
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}


int factorial(int n){
    
    int i=1;
    int res=1;
    for (i=1; i<=n; i++)
        res=res*i;
    return res;
    
    
    
}
