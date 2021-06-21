/*
 * @Author: Author
 * @Date: 2021-06-21 18:03:12
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 18:09:37
 * @FilePath: \C_PrimerPlus\3\3_9.c
 * @description: 类型大小
 */
#include <stdio.h>
int main()
{
    /*C99 为类型大小提供%zd转换说明*/
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",sizeof(long double));
    // 64位机器上 分别为 4 1 4 8 8 16
    
    return 0x00;
}
