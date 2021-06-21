/*
 * @Author: Author
 * @Date: 2021-06-21 17:16:51
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 17:25:03
 * @FilePath: \C_PrimerPlus\3\3_6.c
 * @description: 可移植类型和相互转换
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#if 0
int main()
{
    int32_t me32;   //me32是一个32位有符号整型变量
    me32 = 45933945;

    printf("First, assume int32_t is int:");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h:");
    printf("me32 = %"PRId32"\n", me32);

    return 0x00;
}
#endif

#if 1
int main()
{
    int32_t me32;   //me32是一个32位有符号整型变量
    me32 = 45933945;

    printf("首先, 假设 int32_t 是 int:");
    printf("me32 = %d\n", me32);
    printf("接下来, 我们不做任何假设.\n");
    printf("相反使用 inttypes.h 中的宏:");
    printf("me32 = %"PRId32"\n", me32);

    return 0x00;
}
#endif