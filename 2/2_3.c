/*
 * @Author: Author
 * @Date: 2021-05-21 16:26:55
 * @LastEditors: Author
 * @LastEditTime: 2021-05-21 16:28:35
 * @FilePath: \C_PrimerPlus\2\2_3.c
 * @description: 如何把自己函数加入程序
 */
#include <stdio.h>

void butler();

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}

void butler(void) /* 函数定义开始 */
{
    printf("You rang, sir?\n");
}