/*
 * @Author: Author
 * @Date: 2021-07-02 11:58:20
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 12:00:27
 * @FilePath: \C_PrimerPlus\5\5.7rules.c
 * @description: 优先级测试
 */
#include <stdio.h>

int main()
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n",top, score);

    return 0x00;
}