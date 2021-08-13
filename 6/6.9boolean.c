/*
    使用_BOOL类型的变量 variable
*/
#include <stdio.h>

#if 1
int main()
{
    long num;
    long sum = 0L;

    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    input_is_good = scanf("%ld",&num);

    while(input_is_good = 1)   //赋值表达语句 此时为真 == 比较   = 赋值
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good =  scanf("%ld",&num);
    }

    printf("Those integers sum to %ld.\n", sum);

    return 0x00;
}
#else
int main()
{
    long num;
    long sum = 0L;

     _Bool input_is_good;

    printf("请输入要求和的整数");
    printf("(q退出): ");

    input_is_good = scanf("%ld",&num);

    while(input_is_good = 1)   //赋值表达语句 此时为真 == 比较   = 赋值
    {
        sum = sum + num;
        printf("请输入下一个数 (q 退出): ");
        input_is_good =  scanf("%ld",&num);
    }

    printf("这些整数总和为 %ld.\n", sum);

    return 0x00;
}
#endif