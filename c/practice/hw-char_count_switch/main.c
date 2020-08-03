//
//  main.c
//  hw-char_count_switch
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int blank=0;
    int enter=0;
    int digital=0;
    int other=0;
    int i=1;
    char ch;
    printf("输入十个字符：");
    while (i<10) {
        ch=getchar();
        i++;
        switch (ch) {
            case ' ':
                blank++;
                break;
            case '\n':
                enter++;
                break;
            case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':case 0:
                digital++;
                break;
            default:
                other++;
                break;
        }
    }
    printf("一共有%d个空格，%d个回车，%d个数字，%d个其他\n",blank,enter,digital,other);
    return 0;
}
