/*
    第3个表达式可以使用任意合法的表达式。无论是什么表达式，每次迭
代都会更新该表达式的值
*/

#include <stdio.h>

#if 0
int main()
{
    int x;
    int y = 55;

    for(x = 1; y <= 75; y = (++x * 5) + 50)
    {
        printf("%10d %10d\n",x, y);
    }

    return 0x00;
}
#elif 0
int main()
{
    int x;
    int y = 100;

    for(x = 1; y <= 100; y = x++)
    {
        printf("x = %d y = %d.\n",x, y);
    }

    return 0x00;
}
#else
int main()
{
    int x;
    int y = 100;
    int z;

    for ( x = 1; y >= 50; y = y - x )
    {
        printf("x = %d, y = %d.\n",x, y);
    }
}
#endif 
//注意，测试涉及y，而不是x。for循环中的3个表达式可以是不同的变量