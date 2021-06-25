/*
 * @Author: Author
 * @Date: 2021-06-25 15:06:15
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 15:13:49
 * @FilePath: \C_PrimerPlus\4\4.16varwid.c
 * @description:使用变宽输出字段
 */

#include <stdio.h>

int main()
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d",&width);
    printf("The number is :%*d.\n",width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d%d",&width,&precision);
    printf("Weight=%*.*f\n",width, precision, weight);//字符宽度width 小数点后precision位,weight
    printf("Done!\n");


    return 0x00;
}
