//
//  main.c
//  37-指针-字符串
//
//  Created by edz on 2020/8/7.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void myEncrypt(char *s){
    //遍历字符，修改它
    int i=0;
    while (*s != 0) {

        //*s=*s+1;       //*s==s[0]
        
        *s=(*s=='z')?'a':(*s+1);
        
        s++;
    }
    
    
}




int main(int argc, const char * argv[]) {
    char s[100];
    scanf("%s",s);
    myEncrypt(s);
    printf("%s",s);

    return 0;
}
