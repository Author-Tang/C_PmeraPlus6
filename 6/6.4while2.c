/*
    注意分号的位置
*/
#include <stdio.h>

#if 1 
int main()
{
    int n = 0;

    while(n++ < 3); //空语句

    printf("n is %d.\n",n);
    printf("That's all this program does.\n");

    return 0x00;
}
#else

#endif 