/*
 * @Author: Author
 * @Date: 2021-07-02 10:58:50
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 11:45:08
 * @FilePath: \C_PrimerPlus\5\5.5wheat.c
 * @description: 指数增长
 */
#include <stdio.h>
#define SQUARES 64  //棋盘数量

int main()
{
    const double CROP = 2E16;   //世界小麦年产谷粒数
    double current, total;
    int count = 1;
    
    printf("square      grains      total       ");
    printf("fraction    of\n");
    printf("  格子       谷物  ");
    printf("      世界的    全部\n");

    total = current = 1.0;  /*从第一颗谷粒开始*/
    printf("%4d %13.2e %12.2e %12.2e\n",count, current, total, total / CROP);

    while (count < SQUARES)
    {
        count = count + 1;  //第几个格子
        current = 2.0 * current;    //下一个格子翻一倍
        total = total + current;    //更新总数

        //最后一个参数是除了世界谷物数
        printf("%4d %13.2e %12.2e %12.2e\n",count, current, total, total / CROP);
    }

    printf("That's all.\n");

    return 0x00;
}
