//
//  main.c
//  14-run
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    if (((n%4 == 0)&&(n%100 != 0))||(n%400 == 0)) {
        printf("%d年是闰年\n",n);
    } else {
        printf("%d不是闰年\n",n);
    }
    return 0;
}
