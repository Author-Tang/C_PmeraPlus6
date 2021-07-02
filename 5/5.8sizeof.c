/*
 * @Author: Author
 * @Date: 2021-07-02 15:02:16
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 15:08:27
 * @FilePath: \C_PrimerPlus\5\5.8sizeof.c
 * @description: 使用sizeof运算符
 */
#include <stdio.h>

int main()
{
    int n = 0;
    size_t intsize; //size_t 是一个无符号整数类型 

    intsize = sizeof(int);

    //新增了%zd 转换说明用于 printf()显示 size_t 类型的值
    printf("%d, n has %zd bytes; all ints %zd bytes.\n", n, sizeof(n), intsize);

    return 0x00;
}
