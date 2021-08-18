/*
        可以让递增的量几何增长，而不是算术增长。也就是说，每次都乘上而
不是加上一个固定的量
*/

#include<stdio.h>

#if 1
int main()
{
    double debt;

    for(debt = 100.0; debt < 150.0; debt = debt * 1.1)
    {
        printf("Your debt is now $%.2f.\n",debt);
    }

    return 0x00;
}
#else
int main()
{
    double debt;

    for(debt = 100.0; debt < 150.0; debt = debt * 1.1)
    {
        printf("你的债务现在是 $%.2f.\n",debt);
    }

    return 0x00;
}
#endif