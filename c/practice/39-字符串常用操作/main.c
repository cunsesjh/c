//
//  main.c
//  39-字符串常用操作
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int myStrlen(char *s){
    int len = 0;
    while (*s++ != 0) {
        len++;
    }
    return len;
}

//将s的内容copy到t里面
void myStrcpy(char *s,char *t){
    while (*s != 0) {
        *t=*s;
        t++;
        s++;
    }
    *t=0;
}

//将t字符串拼接在s后面
void myStrcat(char *s,char *t){
    //找到s结束的地方
    while (*s != 0) {
        s++;
    }
    //copy
    myStrcpy(t, s);
}



//比较s和t的大小（ASCII表的数值）
//1:s>t 0:s=t -1:s<t
int myStrcmp(char *s,char *t){
    while (1) {
        if (*s == *t) {
            if (*s == 0) {
                return 0;
            }
            continue;
        } else if(*s > *t) {
            return 1;
        }else {
            return -1;
        }
    }
}



int main(int argc, const char * argv[]) {
    char *s="abcd";
    printf("%d\n",myStrlen(s));
    

    char t[100];//    char *t=malloc(100*sizeof(char));
    myStrcpy(s, t);
    printf("%s\n",t);
    
    
    
    
    printf("%d\n",myStrcmp("", "abc"));
    printf("%d\n",myStrcmp("abcd", "abc"));
    return 0;
}
