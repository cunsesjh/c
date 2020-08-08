//
//  main.c
//  32-字符数组-回文
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[10];
    scanf("%s",s);
    printf("%s\n",s);
    
    int n=0;
    while (s[n] != 0) {
        n++;
    }
    printf("%d\n",n);
    int flag = 1;
    for (int i = 0; i <= n/2 -1; i++) {
        if (s[i] != s[n-1-i]) {
             flag = 0;
             break;
        }
    }
    if (flag == 1){
        printf("是回文\n");
    }else{
        printf("不是回文\n");
    }
    return 0;
}
