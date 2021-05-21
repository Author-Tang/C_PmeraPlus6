/*
 * @Author: Author
 * @Date: 2021-05-21 17:14:13
 * @LastEditors: Author
 * @LastEditTime: 2021-05-21 17:34:08
 * @FilePath: \C_PrimerPlus\2\2_12.c
 * @description: 编程练习
 */
#include <stdio.h>

void jolly();
void deny();
void br();
void ic();
void Sm();
void one_there();
void two();

int main()
{
    //1
    #if 0
    printf("XING MING\n");
    printf("XING\nMING\n");
    printf("XING MING\n");
    #endif
    
    //2
    #if 0
    printf("XINGMING DIZHI\n");
    #endif 
    
    //3
    #if 0
    printf("年龄%d 转为 %d天\n",22,22 * 365);
    #endif
    
    //4
    #if 0
    jolly();
    deny();
    #endif

    //5
    #if 0
    br();ic();printf("\n");
    ic();printf("\n");
    br();
    #endif 

    //6
    #if 0
    int toes = 10;
    printf("toes %d toes * 2 %d toes * toes %d\n",toes, toes * 2, toes * toes);
    #endif

    //7
    #if 0
    Sm();Sm();Sm();printf("\n");
    Sm();Sm();printf("\n");
    Sm();
    #endif
    
    //8
    printf("trarting now:\n");
    one_there();
    printf("two\n");
    two();
    printf("done!");
    return 0x00;
}
void jolly()
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}
void deny()
{
    printf("Which nobody can deny!\n");
}
void br()
{
    printf("Brazil, Russia");
}
void ic()
{
    printf("India, China");
}
void Sm()
{
    printf("Smile!");
}
void one_there()
{
    printf("one\n");
}
void two()
{
    printf("there\n");
}