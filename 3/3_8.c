/*
 * @Author: Author
 * @Date: 2021-06-21 17:56:54
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 17:58:22
 * @FilePath: \C_PrimerPlus\3\3_8.c
 * @description: 浮点运算错误演示
 */
#include <stdio.h>

int main()
{
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;

    printf("%f",a);

    return 0x00;
}
