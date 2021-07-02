/*
 * @Author: Author
 * @Date: 2021-07-02 15:35:41
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 15:38:45
 * @FilePath: \C_PrimerPlus\5\5.12bottles.c
 * @description: 递减运算符
 */
#include <stdio.h>
#define MAX 100

int main()
{
    int count = MAX + 1;
    
    while(--count > 0)
    {
        printf("%d bottles of spring water on the wall," "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0x00;
}
