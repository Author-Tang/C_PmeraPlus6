/*
 * @Author: Author
 * @Date: 2021-07-02 10:43:28
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 10:51:28
 * @FilePath: \C_PrimerPlus\5\5.3golf.c
 * @description: 高尔夫锦标赛计分卡
 */
#include <stdio.h>

int main()
{
    int jane, tarzan, cheeta;
    //三重赋值 赋值顺序从右往左 首先把68 赋值给Jane ，然后在赋值给 tarzan，最后赋值给cheeta
    cheeta = tarzan = jane = 68;
    
    printf("                   cheeta    tarzan    jane\n");
    printf("First round score %4d  %8d  %8d\n",cheeta, tarzan, jane);

    return 0x00;
}
