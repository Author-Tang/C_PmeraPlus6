/*
 * @Author: Author
 * @Date: 2021-07-02 15:09:11
 * @LastEditors: Author
 * @LastEditTime: 2021-07-02 15:24:57
 * @FilePath: \C_PrimerPlus\5\5.9min_sec.c
 * @description:把秒数转换成分和秒
 */
#include <stdio.h>
#define SEC_PER_MIN 60  //字符常量 1分钟60秒

#if 0
int main()
{
    int sec, min, left;
    
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");

    scanf("%d",&sec);

    while(sec > 0)
    {
        min = sec / SEC_PER_MIN;    //截断分钟数
        left = sec % SEC_PER_MIN;   //剩下的秒数

        printf("%d seconds is %d minutes, %d seconds.\n",sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d",&sec);
    }

    printf("Done!\n");
    
    return 0x00;
}
#endif 

#if 1 
int main()
{
    int sec, min, left; //秒 分 剩余
    
    printf("输入秒数转换为分 + 秒\n");
    printf("请输入大于0的秒数:");
    scanf("%d",&sec);

    while(sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        
        printf("%d 转换为%d分 %d秒\n",sec, min, left);
        printf("请输入大于0的秒数:");
        scanf("%d",&sec);
    }
    
    printf("结束\n");

    return 0x00;
}
#endif 

//负数如何取模 如果第1个运算对象是负数，那么求模的结
//果为负数；如果第1个运算对象是正数，那么求模的结果也是正数
/*
    11 / 5得2，11 % 5得1
    11 / -5得-2，11 % -2得1
    -11 / -5得2，-11 % -5得-1
    -11 / 5得-2，-11 % 5得-1
    实际上，标准规定：无论何种情况，只要a和b都是整数值，便可通过a - (a/b)*b来计算a%b。
    例如，可以这样计算-11%5：
    -11 - (-11/5) * 5 = -11 -(-2)*5 = -11 -(-10) = -1
*/