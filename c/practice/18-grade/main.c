//
//  main.c
//  18-grade
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double grade;
    double sum=0;
    int num=0;
    int failed=0;
    scanf("%lf",&grade);
    while (grade>=0) {
        sum=sum+grade;
        num++;
        if (grade<60) {
            failed++;
        }
        scanf("%lf",&grade);
    }
    if (num>0) {
        printf("平均分为：%.2lf\n",sum/num);
    }
    printf("不及格人数为：%d\n",failed);
    return 0;
}
