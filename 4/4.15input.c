/*
 * @Author: Author
 * @Date: 2021-06-25 14:38:09
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 15:05:34
 * @FilePath: \C_PrimerPlus\4\4.15input.c
 * @description: 何时使用&
 */
#include <stdio.h>

int main()
{
    int age;    //变量
    float assetc;   //变量
    char pet[30];   //字符数组

    printf("Enter your age, assetc,and favorite pet.\n");
    scanf("%d%f",&age, &assetc);
    //scanf()函数返回成功读取的项数
    scanf("%s",pet);

    printf("%d $%.2f %s\n",age, assetc, pet);

    return 0x00;
}