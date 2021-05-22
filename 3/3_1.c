/*
 * @Author: Author
 * @Date: 2021-05-22 15:10:27
 * @LastEditors: Author
 * @LastEditTime: 2021-05-22 15:18:37
 * @FilePath: \C_PrimerPlus\3\3_1.c
 * @description: 你的体重转相等价值白金价值
 */
#include <stdio.h>

int main()
{
    float weight;   //你的体重
    float value;    //相等重量的白金价值
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    //获取用户输入
    scanf("%f",&weight);//输入类型请匹配 变量类型
    //假设白金价格是每盎司  1700
    //14.5833用于把英镑常衡盎司转换为金衡盎司
    value = 1700 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}
