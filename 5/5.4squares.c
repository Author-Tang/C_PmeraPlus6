/*
 * @Author: Author
 * @Date: 2021-07-02 10:55:44
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 10:57:30
 * @FilePath: \C_PrimerPlus\5\5.4squares.c
 * @description: 计算1~20的平方
 */
#include <stdio.h>

int main()
{
    int num = 1;
    
    while(num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0x00;
}
