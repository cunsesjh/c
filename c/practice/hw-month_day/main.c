//
//  main.c
//  hw-month_day
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int month,day;
    printf("请输入一个月份（1-12）：");
    scanf("%d",&month);
    if ((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12)) {
        day=31;
        printf("%d月共有%d天\n",month,day);
    } else if ((month==4)||(month==6)||(month==9)||(month==11)) {
        day=30;
        printf("%d月共有%d天\n",month,day);
    }else if (month==2){
        day =28;
        printf("%d月共有%d天\n",month,day);
    }else{
        printf("请重新输入月份\n");
    }
    
    return 0;
}
