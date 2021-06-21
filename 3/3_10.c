/*
 * @Author: Author
 * @Date: 2021-06-21 18:16:25
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 18:19:02
 * @FilePath: \C_PrimerPlus\3\3_10.c
 * @description: printf 参数 错误情况
 */
#include <stdio.h>
int main()
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    printf("%d\n",n, m);//参数过多
    printf("%d %d %d\n",n); //参数过少
    printf("%d %d\n", f, g); // 参数不匹配

    return 0x00;
}
