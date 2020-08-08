//
//  main.c
//  27-数组-斐波那契
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


int search (int a[],int n,int x){
    int k=-1;
    for (int i=0; i<n; i++) {
        if (x==a[i]) {
            k=i;
        }
    }
    return k;
}


int main(int argc, const char * argv[]) {
    int fib[10]={1,1};
    for (int i=2; i<10; i++) {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for (int i=0; i<10; i++) {
        printf("%d ",fib[i]);
    }
    printf("\n");
    printf("0x%lx\n",(unsigned long)fib);
    
    int x=13;
    
    int index=search(fib, 10, x);
    if (index==-1) {
        printf("在fib中没有找到%d\n",x);
    }else{
        printf("%d的下标是%d\n",x,index);
    }
    return 0;
}
