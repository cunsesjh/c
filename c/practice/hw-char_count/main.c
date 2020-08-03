//
//  main.c
//  hw-char_count
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int letter=0,digital=0,other=0,i=0;
    char ch;
   while (i<10) {
          ch = getchar();

          if (ch>='1'&&ch<='9') {
              digital++;
          } else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
              letter++;
          }else{
              other++;
          }
          i++;
      }
    
    printf("共有%d个英文字符，%d个数字，%d个其他字符\n",letter,digital,other);
    return 0;
}
