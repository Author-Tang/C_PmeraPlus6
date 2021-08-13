/*
    注意花括号的使用
        糟糕的代码创建了一个无限循环
*/
#include <stdio.h>

#if 1
int main()
{
    int n = 0;

    while (n < 3)
    printf("n is %d.\n",n);     //一直循环执行这一句  n++并未执行
    n++;

    printf("That's all this program does\n");

    return 0;
}
#else
int main()
{
    int n = 0;

    while (n < 3)
    printf("n is %d.\n",n);     //一直循环执行这一句  n++并未执行
    n++;

    printf("这就是这个程序所做的一切\n");

    return 0;
}
#endif

/*
    注：while语句本身使用复合语句，在语句构成上 他也是一条单独的语句。该语句从while开始 到第一个分号结束；
    在使用符合语句的情况下，到右括号结束
*/