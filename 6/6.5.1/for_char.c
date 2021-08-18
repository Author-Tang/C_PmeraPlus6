/*
    可以用字符代替数字计数
*/

#include <stdio.h>

#if 0
int main()
{
    char ch;

    for(ch = 'a'; ch <= 'z'; ch++)
    {
        printf("The ASCII value for %c is %d.\n",ch, ch);
    }

    return 0x00;
}
#else
int main()
{
    char ch;

    for(ch = 'a'; ch <= 'z'; ch++)
    {
        printf("ASCII码 %c 值是 %d.\n",ch, ch);
    }

    return 0x00;
}
#endif 
