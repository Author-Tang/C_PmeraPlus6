/*
 * @Author: Author
 * @Date: 2021-05-21 16:19:48
 * @LastEditors: Author
 * @LastEditTime: 2021-05-21 16:25:31
 * @FilePath: \C_PrimerPlus\2\2_2.c
 * @description: 把2英训准换为英寸
 */
#include <stdio.h>

#if 0
int main()
{
    int feet, fathoms;
    
    fathoms = 2;
    feet = fathoms * 6;
    
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    return 0x00;
}
#endif

#if 1
int main()
{
    int feet, fathoms;
    
    fathoms = 2;
    feet = fathoms * 6;
    
    printf("将%d英训 转为%d英寸\n", feet, fathoms);
    printf("转换后%d英寸!\n", 6 * fathoms);
    return 0x00;
}
#endif
