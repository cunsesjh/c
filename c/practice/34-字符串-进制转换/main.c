//
//  main.c
//  34-字符串-进制转换
//
//  Created by edz on 2020/8/6.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[80];
    //输入
    scanf("%s",s);
    //过滤不是16进制的字符
    int i=0;
    int j=0;
    while (s[i] != 0) {
        if ((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='f')||(s[i]>='A' && s[i]<='F')) {
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]=0;
    printf("%s\n",s);
    
    i=0;
    int sum=0;
    while (s[i] != 0) {
        int t;
        if (s[i]>='0' && s[i]<='9') {
            t=s[i]-'0';
        }else if (s[i]>='a' && s[i]<='f'){
            t=s[i]-'a'+10;
        }else{
            t=s[i]-'A'+10;
        }
        sum=sum*16+t;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
