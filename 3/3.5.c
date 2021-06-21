/*
 * @Author: Author
 * @Date: 2021-06-21 17:01:23
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 17:06:40
 * @FilePath: \C_PrimerPlus\3.5.c
 * @description: 打印char 类型变量的两种方式
 */
#include <stdlib.h>
#if 0
int main()
{
   char ch;
   printf("Please enter a character.\n");
   scanf("%c",&ch);
   printf("The code for %c is %d.\n",ch,ch);
   
   return 0x00; 
}
#endif
#if 1
int main()
{
    char ch;
    printf("请输入一个字符.\n");
    scanf("%c",&ch);
    printf("显示为 %c 和 %d",ch, ch);

    return 0;
}
#endif