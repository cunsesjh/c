//
//  main.c
//  35-指针-demo
//
//  Created by 半圆 on 2020/8/7.
//  Copyright © 2020 半圆. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int* func(int n) {
    // int a[n];
    int *a;
    a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    return a;
}

// 从终端接收字符，转换为d
void getInt(int* d) {
    *d = 100;
}

int main(int argc, const char * argv[]) {
    char s[] = "ABC";
    printf("s = \"%s\"\n", s);
    s = "DEF";
    printf("s = \"%s\"\n", s);

#if 0
    int d;
    getInt(&d);
    printf("%d\n", d);
//    scanf("%d", &d);
    

    char s[] = "Hello";
    s[4] = '!';
    printf("%s\n", s);
    char* s1 = "Hello";
    s1[4] = '!';
    printf("%s\n", s1);

    int* p;
    p = func(10);
    printArray(p, 10);
    
    int x;
    x = 100;
    int* p;
    p = &x;
    
    printf("0x%lx\n", (unsigned long)p);
    printf("0x%lx\n", (unsigned long)&p);
    printf("0x%lx\n", (unsigned long)&x);
    
    printf("%d\n", *p);
    *p = 200;
    printf("%d\n", x);
    
    int a[10];
    printf("0x%lx\n", (unsigned long)a);
    printf("0x%lx\n", (unsigned long)&a[0]);
    printArray(a, 10);
    /*
    *a = 100;
    *(a+1) = 200;
    *(a+2) = *a + (*(a+1));
     */
    a[0] = 100;
    a[1] = 200;
    a[2] = a[0] + a[1];
    printArray(a, 10);
    
    printf("%ld\n", &a[4] - a);
    printf("%ld\n", (long)&a[4] - (long)a);
#endif
    return 0;
}
