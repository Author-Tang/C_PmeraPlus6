/*
 * @Author: Author
 * @Date: 2021-06-25 13:36:27
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 13:42:30
 * @FilePath: \C_PrimerPlus\4\4.8float.c
 * @description: 一些浮点型修饰符的组合
 */

#include <stdio.h>

int main()
{
    const double RENT = 3852.99;
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    return 0x00;
}
