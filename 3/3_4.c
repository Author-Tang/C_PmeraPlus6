/*
 * @Author: Author
 * @Date: 2021-05-22 15:58:33
 * @LastEditors: Author
 * @LastEditTime: 2021-05-22 16:03:38
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

    printf("un = %u and not %d\n",un,un);
    printf("end = %hd and %d\n",end, end);
    printf("big = %ld and %hd\n",big,big);
    printf("verybig = %lld and %ld\n",verybig, verybig);

    return 0x00;
}
