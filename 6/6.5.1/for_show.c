/*
    第1个表达式不一定是给变量赋初值，也可以使用printf()。记住，在执
行循环的其他部分之前，只对第1个表达式求值一次或执行一次。
*/

#include <stdio.h>

#if 1
int main()
{

    int num = 0;

    for (printf("Keep entering numbers!\n");num != 6;)
    scanf("%d",&num);

    printf("That's the one I want!\n");

    return 0x00;
}

#else

#endif 


/*
    小结：for语句
关键字：for
一般注解：
for语句使用3个表达式控制循环过程，分别用分号隔开。initialize表达
式在执行for语句之前只执行一次；然后对test表达式求值，如果表达式为真
（或非零），执行循环一次；接着对update表达式求值，并再次检查test表达
式。for语句是一种入口条件循环，即在执行循环之前就决定了是否执行循
环。因此，for循环可能一次都不执行。statement部分可以是一条简单语句或
复合语句。
形式：
for ( initialize; test; update )
statement
在test为假或0之前，重复执行statement部分。
*/