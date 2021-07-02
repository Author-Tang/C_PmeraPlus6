/*
 * @Author: Author
 * @Date: 2021-07-02 10:18:41
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 10:31:16
 * @FilePath: \C_PrimerPlus\5\5.1shoes1.c
 * @description: 把鞋码转换成英寸
 */
#include <stdio.h>
#define ADJUST 7.31 //字符常量

#if 0
int main()
{
    const double SCALE = 0.333; //const 变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f  %15.2f inches\n", shoe, foot);
    
    return 0x00;
}
#endif 

#if 1
int main()
{
    const double SCALE = 0.333; //const 变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    
    printf("男士鞋码脚长\n");
    printf("%10.1f  %15.2f 英寸\n", shoe, foot);
    
    return 0x00;
}

#endif