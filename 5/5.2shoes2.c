/*
 * @Author: Author
 * @Date: 2021-07-02 10:25:09
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 10:34:16
 * @FilePath: \C_PrimerPlus\5\5.2shoes2.c
 * @description: 计算多个不同鞋码对应的脚长
 */
#include <stdio.h>
#define ADJUST 7.31     //字符常量

#if 0
int main()
{
    const double SCALE = 0.333; //const 变量
    double shoe, foot;
    
    printf("Shoe size (men's) foot length\n");
    shoe = 3.0;

    while(shoe < 18.5)  //while 循环开始
    {
        foot = SCALE * shoe + ADJUST;
        
        printf("%10.1f  %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }

    printf("If the shoe fits, wear it.\n");

    return 0x00;
}
#endif 
#if 1
int main()
{
    const double SCALE = 0.333; //const 变量
    double shoe, foot;
    
    printf("男士鞋码脚长\n");
    shoe = 3.0;

    while(shoe < 18.5)  //while 循环开始
    {
        foot = SCALE * shoe + ADJUST;
        
        printf("%10.1f  %15.2f 英寸\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("如果鞋子合脚就穿.\n");

    return 0x00;
}

#endif