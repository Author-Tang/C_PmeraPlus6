/*
 * @Author: Author
 * @Date: 2021-06-25 14:20:11
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 14:24:55
 * @FilePath: \C_PrimerPlus\4\4.13printval.c
 * @description: printf的返回值
 */

#include <stdio.h>

int main()
{
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n",bph2o);  //printf 成功返回打印的字符个数
    printf("The printf() function printed %d characters.\n",rv);

    return 0x00;
}
