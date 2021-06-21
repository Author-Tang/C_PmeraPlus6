/*
 * @Author: Author
 * @Date: 2021-06-21 18:22:10
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 18:25:33
 * @FilePath: \C_PrimerPlus\3\3_11.c
 * @description: 使用转移序列
 */
#include <stdio.h>
int main()
{
    float salary;
    printf("\aEnter your desired monthly salary:"); //1
    printf("$__________\b\b\b\b\b\b"); //2
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary, salary * 12.0); //3
    printf("\rGee!\n");

    return 0x00;
}
