//
//  main.c
//  13-char
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    while ((ch = getchar()) != EOF) {
        if (ch <='z' && ch>='a') {
            ch=ch+('A'-'a');
        } else if(ch<='Z' && ch>='A' ){
            ch= ch+'a'-'A';
        }
        putchar(ch);
    }
        

    return 0;
}
