/*
 * @Author: Author
 * @Date: 2021-07-02 15:25:26
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 15:27:30
 * @FilePath: \C_PrimerPlus\5\5.10add_one.c
 * @description: 递增 前缀和后缀
 */

#include <stdio.h>

int main()
{
    int ultra = 0, super = 0;

    while(super < 5)
    {
        super++;
        ++ultra;

        printf("super = %d, ultra = %d\n", super, ultra);
    }

    return 0x00;
}
