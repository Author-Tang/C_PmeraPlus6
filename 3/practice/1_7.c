/*
 * @Author: Author
 * @Date: 2021-06-23 16:31:10
 * @LastEditors: Author
 * @LastEditTime: 2021-06-23 16:33:01
 * @FilePath: \C_PrimerPlus\3\practice\1_7.c
 * @description: Do not edit
 */
/*
    7.1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
*/

#include <stdio.h>

int main()
{
    float f = 2.54;
    float f1 = 0;
    printf("请输入身高(英寸):");
    scanf("%f",&f1);
    printf("厘米为 : %f",f1 * f);

    return 0x00;
}