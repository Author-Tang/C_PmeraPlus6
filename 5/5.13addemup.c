/*
 * @Author: Author
 * @Date: 2021-07-02 15:44:25
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 15:47:48
 * @FilePath: \C_PrimerPlus\5\5.13addemup.c
 * @description: 几种常见的语句
 */
#include <stdio.h>

int main()  /*计算前20 个整数和*/
{
    int count, sum; //声明1
    count = 0;      //表达式语句
    sum = 0;        //表达式语句

    while(count++ < 20) //迭代语句
    sum = sum + count;

    printf("sum = %d\n", sum);  //表达式语句2

    return 0;   //跳转语句
    
}
