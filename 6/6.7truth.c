/*
    哪些值为真
*/

#include <stdio.h>

#if 1 
int main()
{
    int n = 3;
    while(n)
    printf("%2d is true.\n",n--);
    printf("%2d is false.\n",n);

    n = -3;
    while(n)
    printf("%2d is true.\n",n++);
    printf("%2d is false.\n",n);

    return 0x00;
}
#else 

#endif 

//一般而言，所有的非零值为真，只有0被视为假