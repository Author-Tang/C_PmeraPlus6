/*
 * @Author: Author
 * @Date: 2021-05-22 15:36:00
 * @LastEditors: Author
 * @LastEditTime: 2021-05-22 15:38:36
 * @FilePath: \C_PrimerPlus\3\3_2.c
 * @description: printf特性
 */
#include <stdio.h>

int main()
{
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d\n",ten,2,ten - two);

    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n",ten);  //遗漏两个参数

    return 0x00;
}
