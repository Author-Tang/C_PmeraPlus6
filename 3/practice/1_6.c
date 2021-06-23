/*
 * @Author: Author
 * @Date: 2021-06-23 16:26:21
 * @LastEditors: Author
 * @LastEditTime: 2021-06-23 16:29:44
 * @FilePath: \C_PrimerPlus\3\practice\1_6.c
 * @description: Do not edit
 */
/*
    6.1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。
    编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/

#include <stdio.h>

int main()
{
    float  f = 3.0e-23;
    float f1  = 0;
    printf("输入水的 夸脱数:");
    scanf("%f",&f1);
    printf("水分子数量%f",f1 * 950 /f);

    return 0x00;
}