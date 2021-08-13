/*
    误用真值 == 会导致无限循环
*/

#include <stdio.h>

#if 1
int main()
{
    long num;
    long sum = 0L;

    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    status = scanf("%ld",&num);

    while(status = 1)   //赋值表达语句 此时为真 == 比较   = 赋值
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status =  scanf("%ld",&num);
    }

    printf("Those integers sum to %ld.\n", sum);

    return 0x00;
}
#else
int main()
{
    long num;
    long sum = 0L;

    int status;

    printf("请输入要求和的整数");
    printf("(q退出): ");

    status = scanf("%ld",&num);

    while(status = 1)   //赋值表达语句 此时为真 == 比较   = 赋值
    {
        sum = sum + num;
        printf("请输入下一个数 (q 退出): ");
        status =  scanf("%ld",&num);
    }

    printf("这些整数总和为 %ld.\n", sum);

    return 0x00;
}
#endif

//防止出现类似错误 建议将常数量放在左值     while(5 == status),如在写成 “=”，则会报语法错误