/*
 * @Author: Author
 * @Date: 2021-06-25 10:59:24
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 11:19:52
 * @FilePath: \C_PrimerPlus\4\4.4pizza.c
 * @description: 在比萨饼程序中使用已定义的常量
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
#define PI 3.14159

//#define 还可以定义字符和字符串常量 
#define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "Now you have done it!"

#if 0
int main()
{
    float area, circum, radius;

    printf("What is the radius of your pezza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0x00;
}
#endif

#if 1
int main()
{
    float area, circum, radius;

    printf("你的比萨半径是多少?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    
    circum = 2.0 * PI * radius;

    printf("您的比萨基本参数如下:\n");
    printf("周长 = %1.2f, 面积 = %1.2f\n", circum, area);

    printf("Maximum int value on this system = %d, MIN = %d\n",INT_MAX,INT_MIN);

    return 0x00;
}
#endif