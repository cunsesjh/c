//
//  main.c
//  33-字符串常用操作
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int stringLen(char s[]){
    int n=0;
    while (*s++ != 0) {
        n++;
    }
    
}





int main(int argc, const char * argv[]) {
    char s[100];
    scanf("%s",s);
    printf("len si %d\n",stringLen(s));
    return 0;
}
