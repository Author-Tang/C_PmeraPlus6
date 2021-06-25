/*
 * @Author: Author
 * @Date: 2021-06-25 15:14:34
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 15:17:24
 * @FilePath: \C_PrimerPlus\4\4.17skip2.c
 * @description: 跳过输入中的前两个整数
 */
#include <stdio.h>

int main()
{
    int n;
    
    printf("Please enter three integers:\n");
    scanf("%*d%*d%d",&n);   //把*号放在%和转换字符之间，会使得scanf跳过相应的输出项
    printf("The last integer was %d\n",n);

    return 0x00;
}
