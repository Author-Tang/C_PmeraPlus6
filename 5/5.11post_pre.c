/*
 * @Author: Author
 * @Date: 2021-07-02 15:28:51
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 15:34:08
 * @FilePath: \C_PrimerPlus\5\5.11post_pre.c
 * @description: 前缀和后缀
 */

#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;   //后缀递增  使用a的值之后，递增a
    pre_b = ++b;    //前缀递增  使用b的值之前，递增b
    
    printf("a   a_post  b   pre_b   \n");
    printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);

    return 0x00;
}
