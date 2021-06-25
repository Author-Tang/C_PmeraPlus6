/*
 * @Author: Author
 * @Date: 2021-06-24 11:24:46
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 10:56:09
 * @FilePath: \C_PrimerPlus\4\praise2.c
 * @description: Do not edit
 */
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main()
{   
    char name[40];
    
    printf("What's your name?");
    scanf("%s",name);
    printf("Hello,%s.%s",name,PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
    

    return 0x00;
}