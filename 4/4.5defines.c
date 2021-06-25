/*
 * @Author: Author
 * @Date: 2021-06-25 11:21:49
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 11:31:19
 * @FilePath: \C_PrimerPlus\4\4.5defines.c
 * @description: 使用limit.h和float头文件中定义的明示常量
 */
#include <stdio.h>
#include <limits.h> //整型限制
#include <float.h>  //浮点型限制

#if 0
int main()
{
    
    printf("Some numbe limits for this system:\n");
    printf("Biggest int :%d\n",INT_MAX);
    printf("Smallest long long %lld\n",LLONG_MAX);
    printf("One byte=%d bits on this system.\n",CHAR_BIT);
    printf("Largest double:%e\n",DBL_MAX);
    printf("Smallest normal float:%e\n",FLT_MIN);
    printf("float precision=%d digits\n",FLT_DIG);
    printf("float epsilon=%e\n",FLT_EPSILON);   

    return 0x00;
}
#endif 
#if 1
int main()
{
    
    printf("这个系统的一些数字限制:\n");
    printf("最大整数 :%d\n",INT_MAX);
    printf("最小长整数 %lld\n",LLONG_MIN);
    printf("一字节=%d 在这个系统上的位.\n",CHAR_BIT);
    printf("最大的double:%e\n",DBL_MAX);
    printf("最小的正常浮点数:%e\n",FLT_MIN);
    printf("浮点精度=%d 数字\n",FLT_DIG);
    printf("浮点数可表示的最小值=%e\n",FLT_EPSILON);   

    return 0x00;
}
#endif