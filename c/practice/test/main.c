
//
//  main.c
//  hw-char_count_switch
//
//  Created by edz on 2020/8/3.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

void decrement_date(int *year,int *month,int *day){
    int month_day;
    int leap;
    int tab [2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31 },
    {0,31,29,31,30,31,30,31,31,30,31,30,31 }};
    leap = (*year %4==0 && *year%100!=0) || *year%400== 0;
    
    month_day=tab[leap][(*month)+1];
    if (*month>1) {
        if (*day>1) {
            printf("%d年%d月%d日\n",*year,*month,(*day)-1);
        } else {
            printf("%d年%d月%d日\n",*year,(*month)-1,31);
        }
    } else {
        if (*month>1) {
            printf("%d年%d月%d日\n",*year,(*month)-1,31);
        } else {
            printf("%d年%d月%d日\n",(*year)-1,12,31);
        }
    }
    
    
}


void increment_date(int *year,int *month,int *day){
    int month_day;
    int leap;
    int tab [2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31 },
    {0,31,29,31,30,31,30,31,31,30,31,30,31 }};
    leap = (*year %4==0 && *year%100!=0) || *year%400== 0;
    
    month_day=tab[leap][*month];
    if (*month<12) {
        if (*day<month_day) {
            printf("%d年%d月%d日\n",*year,*month,(*day)+1);
        } else {
            printf("%d年%d月%d日\n",*year,(*month)+1,1);
        }
    } else {
        if (*day<month_day) {
            printf("%d年%d月%d日\n",*year,*month,(*day)+1);
        } else {
            printf("%d年%d月%d日\n",(*year)+1,1,1);
        }
    }
    
    
    
}

int main(void)
{
    
    int year;
    int month;
    int day;
    printf("请输入年月日，空格分割\n");
    scanf("%d %d %d",&year,&month,&day);
    
    printf("后一天为：");
    increment_date(&year, &month, &day);
    
    printf("前一天为：");
    decrement_date(&year, &month, &day);
    
    return 0;
}

