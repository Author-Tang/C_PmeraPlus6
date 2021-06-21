/*
 * @Author: Author
 * @Date: 2021-05-22 15:58:33
 * @LastEditors: Author
 * @LastEditTime: 2021-06-21 16:25:47
 * @FilePath: \C_PrimerPlus\3\3_4.c
 * @description: printf特性2
 */
#include <stdio.h>

int main()
{
    unsigned int un = 300000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n",un,un);//%u 无符号ULONG   %d 有符号十进制整数
    printf("end = %hd and %d\n",end, end); //%hd short int   
    printf("big = %ld and %hd\n",big,big); // long int  short int
    printf("verybig = %lld and %ld\n",verybig, verybig); // long long int  long int

    return 0x00;
}
