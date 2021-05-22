/*
 * @Author: Author
 * @Date: 2021-05-22 15:42:04
 * @LastEditors: Author
 * @LastEditTime: 2021-05-22 15:57:01
 * @FilePath: \C_PrimerPlus\3\3_3.c
 * @description: 以十进制、八进制、十六进制打印十进制数100 
 */

#include <stdio.h>

#if 0
int main()
{
    int i = 100;
    
    printf("十进制 %d; 八进制%o; 十六进制%x\n",i,i,i);
    printf("十进制 %d; 八进制%#o; 十六进制%#x\n",i,i,i);
    
    return 0x00;
}
#endif

#if 1
//超出系统允许的最大int 值
int main()
{
    int i =  2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d \n",i, i + 1, i + 2);  //有符号越界会从最小值 负值重新开始
    printf("%d %d %d \n",j, j + 1, j + 2);  //无符号越界会从0重新开始
    return 0x00;
}

#endif