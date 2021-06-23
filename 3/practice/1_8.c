/*
 * @Author: Author
 * @Date: 2021-06-23 16:33:50
 * @LastEditors: Author
 * @LastEditTime: 2021-06-23 16:39:56
 * @FilePath: \C_PrimerPlus\3\practice\1_8.c
 * @description: Do not edit
 */
/*
    8.在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等
于2大汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以
品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用
浮点类型比整数类型更合适？
*/

#include <stdio.h>

int main()
{   
    int i = 0;
    printf("输入杯数:");
    scanf("%d",&i);

    printf("品脱%f",2.0 / i);
    printf("盎司%f",i / 8.0);
    printf("汤勺%f",(i/8.0) * 2.0);
    printf("茶勺%f",((i/8.0) * 2.0)*3.0);


    return 0x00;
}