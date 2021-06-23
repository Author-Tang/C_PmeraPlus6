/*
 * @Author: Author
 * @Date: 2021-06-23 16:14:55
 * @LastEditors: Author
 * @LastEditTime: 2021-06-23 16:17:36
 * @FilePath: \C_PrimerPlus\3\practice\1_5.c
 * @description: Do not edit
 */
/*
    5.一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
*/
#include <stdio.h>

int main()
{
    double sec = 0;
    printf("Please enter your age：");
    scanf("%lf",&sec);

    printf("sec = %lf",sec * 365 * 24 * 60 * 60);

    return 0x00;
}