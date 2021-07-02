/*
 * @Author: Author
 * @Date: 2021-07-02 16:07:06
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 16:11:28
 * @FilePath: \C_PrimerPlus\5\5.15pound.c
 * @description: 定义一个带一个参数的函数
 */
#include <stdio.h>
void pound(int n);  //ANSI函数原型声明

int main()
{
    int times = 5;
    char ch = '!';  //ASCII码为33
    float f = 6.0f;

    pound(times);   //int 类型的参数
    pound(ch);      //和pound((int)ch)相同
    pound(f);       //和pound((int)f)相同
    
    return 0x00;
}

void pound(int n)   //ANSI风格函数头
{
    while(n-- > 0)
    printf("#");
    printf("\n");
}
