/*
 * @Author: Author
 * @Date: 2021-06-25 13:43:03
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 13:47:30
 * @FilePath: \C_PrimerPlus\4\3.9flags.c
 * @description: 演示一些格式标记
 */
#include <stdio.h>

int main()
{
    printf("%x %X %#x\n",31, 31, 31);
    printf("**%d**% d**% d**\n",42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0x00;
}
