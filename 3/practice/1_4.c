/*
 * @Author: Author
 * @Date: 2021-06-23 15:43:01
 * @LastEditors: Author
 * @LastEditTime: 2021-06-23 15:57:02
 * @FilePath: \C_PrimerPlus\3\practice\1_4.c
 * @description: Do not edit
 */
/*
4.编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指
数形式。然后，如果系统支持，再打印成p记数法（即十六进制记数法）。
按以下格式输出（实际显示的指数位数因系统而异）：
Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6
*/
#include <stdio.h>
 
int main()
{
    double  num;
    printf("Enter a floatint-point value:");
    scanf ("%lf", &num);
    printf("小数形式 %lf\n",num);
    printf("指数形式 %e\n",num);
    printf("p计数法 %a\n", num);

    return 0x00;     
}