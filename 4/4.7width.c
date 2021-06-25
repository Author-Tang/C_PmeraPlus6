/*
 * @Author: Author
 * @Date: 2021-06-25 11:42:33
 * @LastEditors: Author
 * @LastEditTime: 2021-06-25 11:46:11
 * @FilePath: \C_PrimerPlus\4\4.7width.c
 * @description: 字符宽度
 */
#include <stdio.h>
#define PAGES 959

int main()
{
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);

    
    printf("*%-10d*\n",PAGES);

    return 0x00;
}

/*
    第1个转换说明%d不带任何修饰符，其对应的输出结果与带整数字段宽
度的转换说明的输出结果相同。在默认情况下，没有任何修饰符的转换说
明，就是这样的打印结果。第2个转换说明是%2d，其对应的输出结果应该
是 2 字段宽度。因为待打印的整数有 3 位数字，所以字段宽度自动扩大以符
合整数的长度。第3个转换说明是%10d，其对应的输出结果有10个空格宽
度，实际上在两个星号之间有7个空格和3位数字，并且数字位于字段的右
侧。最后一个转换说明是%-10d，其对应的输出结果同样是10个空格宽
度，-标记说明打印的数字位于字段的左侧。
*/