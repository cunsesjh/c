//
//  main.c
//  31-字符数组
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char s[]="abc";
    char s1[3]={'a','b','c'};
    char s2[3]="abc";
    printf("%lu\n",sizeof(s));
    printf("%lu\n",sizeof(s1));
    printf("%lu\n",sizeof(s2));
    return 0;
}
