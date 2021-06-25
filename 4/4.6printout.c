/*
 * @Author: Author
 * @Date: 2021-06-25 11:33:28
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 11:40:58
 * @FilePath: \C_PrimerPlus\4\4.6printout.c
 * @description: 使用转换说明
 */

#include <stdio.h>
#define PI 3.141593

int main()
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    
    printf("The %d contestants ate %f berry pies.\n",number, pies);
    printf("Yhe value of pi is %f.\n",PI);
    printf("%c%d\n",'$', 2 * cost);
    //如何打印出 %号呢  
    printf("%%");

    return 0x00;
}
