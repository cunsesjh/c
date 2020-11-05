//
//  main.c
//  test-台阶
//
//  Created by edz on 2020/8/11.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int solution(int n){
    int count=0;
    int a=1;
    int b=2;
    if (n == 0) {
        return 0;
    } else if(n == 1||n == 2){
        return n;
    }else {
        for (int i=3; i<=n; i++) {
            count=a+b;
            a=b;
            b=count;
        }
    }
    return count;
}



int main(int argc, const char * argv[]) {
    int n;
    printf("输入台阶数：\n");
    scanf("%d",&n);
    
    printf("共需要%d种\n",solution(n));
    return 0;
}
