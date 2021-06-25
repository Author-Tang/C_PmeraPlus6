/*
 * @Author: Author
 * @Date: 2021-06-25 14:28:11
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 14:32:35
 * @FilePath: \C_PrimerPlus\4\4.14longstrg.c
 * @description: 打印较长的字符串
 */
#include <stdio.h>

int main()
{
    printf("Here's one way to print a");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");       //用反斜杠来进行断行 ，但是第二行需从最左边开始
    printf("Here's the newest way to print a"
    "long string.\n");

    return 0x00;
}
