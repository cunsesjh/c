//
//  main.c
//  19-bit_count
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    int count=0;
    do {
        num=num/10;
        count++;
    } while (num != 0);
    printf("%d位数\n",count);
    return 0;
}
