/*
判断输入的整数的符号
*/
#include <stdio.h>


int main(void)
{
    float x,y;
    scanf("%f",&x);
    if (x<0) {
        y=-x;
    } else {
        y=x;
    }
    printf("%.2f的绝对值为：%.2f\n",x,y);
}
