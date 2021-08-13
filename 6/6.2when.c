/*
    何时退出循环
*/

#include <stdio.h>

#if 1
int main()
{
    int n = 5;

    while(n < 7)
    {
        printf("n = %d.\n",n);
        n++;
        printf("Now n = %d.\n",n);
    }

    printf("The loop has finished.\n");

    return 0x00;
}
#else 
int main()
{
    int n = 5;

    while(n < 7)
    {
        printf("n = %d.\n",n);
        n++;
        printf("现在 n = %d.\n",n);
    }

    printf("循环以完成.\n");

    return 0x00;
}
#endif