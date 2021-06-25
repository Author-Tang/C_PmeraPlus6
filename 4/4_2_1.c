/*
 * @Author: Author
 * @Date: 2021-06-24 11:19:08
 * @LastEditors: Author
 * @LastEditTime: 2021-06-24 11:24:05
 * @FilePath: \C_PrimerPlus\4\4_2_1.c
 * @description: 使用不同类型的字符串
 */
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."    //你是非凡的存在

int main()
{
    char name[40];
    printf("What's your name?");
    scanf("%s",name);
    printf("Hello,%s.%s\n",name,PRAISE);

    return 0x00;
}
/*
    字符串和字符
        字符串常量"x"和字符常量'x'不同。区别之一在于'x'是基本类型
        （char），而"x"是派生类型（char数组）；区别之二是"x"实际上由两个字符
        组成：'x'和空字符\0
*/