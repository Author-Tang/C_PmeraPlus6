/*
    根据用户键入的整数求和
*/

#include <stdio.h>

#if 0
int main()
{
    long num;
    long sum = 0L;  //把sum初始化为0

    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    status = scanf("%ld",&num);

    while(status)
    {
        sum = sum + num;
        printf("Please enter an integer to be summed ");
        printf("(q to quit): ");
        
        status = scanf("%ld",&num);
    }

    printf("Those integers sum to %ld.\n",sum);

    return 0x00;
}
#else
int main()
{
    long num;
    long sum = 0L;  //把sum初始化为0 C编译器会把0转换为合适的类型，单位了保持程序的一致性，Long类型的0

    int status;

    printf("请输入要求和的整数");
    printf("(输入q退出): ");

    status = scanf("%ld",&num);

    while(status)
    {
        sum = sum + num;
        printf("请输入要求和的整数");
        printf("(输入q退出): ");
        
        status = scanf("%ld",&num);
    }

    printf("这些整数总和为 %ld.\n",sum);

    return 0x00;
}
#endif