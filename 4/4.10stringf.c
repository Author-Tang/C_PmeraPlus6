/*
 * @Author: Author
 * @Date: 2021-06-25 13:50:38
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 14:04:25
 * @FilePath: \C_PrimerPlus\4\4.10stringf.c
 * @description: 字符串格式
 */
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main()
{
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);

    char name[40];
    double cash;
    scanf("%s",name);
    scanf("%lf",&cash);
    printf("The  %s family just may be $%.2lf dollars richer",name, cash);

    return 0x00;
}

