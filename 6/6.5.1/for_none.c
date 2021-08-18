/*
    可以省略一个或多个表达式 但是不可以省略分号 
*/
#include <stdio.h>
#if 1
int main()
{
    int ans, n;

    ans = 2;

    for (n = 3; ans <= 25;)
    {
        ans = ans * n;
    }
    printf("n = %d; ans = %d.\n", n, ans);

    return 0x00;
}
#else

#endif 
