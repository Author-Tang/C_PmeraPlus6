/*
 * @Author: Author
 * @Date: 2021-05-19 11:03:49
 * @LastEditors: Author
 * @LastEditTime: 2021-05-21 15:26:12
 * @FilePath: \C_PrimerPlus\1\1_1.c
 * @description: 简单的C源码示例
 */
#include <stdio.h>
#if 0
int main()
{
    int dogs;
    printf("How many dogs do you have?\n");  
    scanf("%d",&dogs);
    printf("So you have %d dog(s)!\n", dogs);
    return 0;
}
#endif

#if 1
int main()
{
    int dogs;
    printf("你有多少条狗?\n");  
    scanf("%d",&dogs);
    printf("所以你有 %d 条狗!\n", dogs);
    return 0;
}

#endif