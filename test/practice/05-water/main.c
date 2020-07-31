//
//  main.c
//  05-water
//
//  Created by edz on 2020/7/31.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>


float water(float x){
    

    float wat;
    if (x<=15) {
        wat=x*4/3;
    }else {
        wat=2.5*x-10.5;
    }
    return wat;
    
    
}


int main(int argc, const char * argv[]) {
    float x;
    printf("请输入x：");
    scanf("%f",&x);
    if (x<0) {
        printf("水费不能为负\n");
        return -1;
    }
    printf("%.2f吨水费为：%.2f元\n",x,water(x));
    return 0;
}



