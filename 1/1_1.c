/*
 * @Author: Author
 * @Date: 2021-05-19 11:03:49
 * @LastEditors: Author
 * @LastEditTime: 2021-05-21 15:34:05
 * @FilePath: \C_PrimerPlus\1\1_1.c
 * @description: 简单的C源码示例
 */
#include <stdio.h>
/*
    使用C语言的7个步骤
        1.定义程序的目标
        2.设计程序
        3.编写代码
        4.编译
        5.运行程序
        6.测试和调试程序
        7.维护和修改程序
*/
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