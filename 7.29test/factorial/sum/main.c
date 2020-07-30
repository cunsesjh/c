//
//  main.c
//  sum
//
//  Created by edz on 2020/7/30.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    int sum = 0;
    int i;
    for (i=0; i<=100; i++) {
        if (i%2==0) {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
