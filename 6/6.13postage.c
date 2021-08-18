/*
    一类邮资
程序清单6.13演示了一个打印一类邮件资费（first-class
postage
rate）的程序（在撰写本书时，邮资为首重40美分/盎司，续重20美分/盎
司，可以在互联网上查看当前邮资）。
*/
#include <stdio.h>

#if 1
int main()
{
    const int FIRST_OZ = 46;    //2013邮资
    const int NEXT_OZ = 20;     //2013邮资

    int ounces, cost;

    printf("    ounces  cost\n");

    for(ounces = 1, cost = FIRST_OZ; ounces <=16; ounces++, cost += NEXT_OZ)
    printf("%5d $%4.2f\n", ounces, cost / 100.0);

    return 0x00;
}
#else

#endif
/*
    该程序在初始化表达式和更新表达式中使用了逗号运算符。初始化表达
式中的逗号使ounces和cost都进行了初始化，更新表达式中的逗号使每次迭
代ounces递增1、cost递增20（NEXT_Z的值是20）
*/
/*
    其次，整个逗号表达式的值是右侧项的值。例如，下面语句
x = (y = 3, (z = ++y + 2) + 5);的效果是：先把3赋给y，递增y为4，然后把
4加2之和（6）赋给z，接着加上5，最后把结果11赋给
x。至于为什么有人
编写这样的代码，在此不做评价。另一方面，假设在写数字时不小心输入了
逗号：
houseprice = 249,500;
这不是语法错误，C
编译器会将其解释为一个逗号表达式，即
houseprice = 249 是逗号左侧的子表达式，500 是右侧的子表达式。因此，整
个逗号表达式的值是逗号右侧表达式的值，而且左侧的赋值表达式把249赋
给变量houseprice。因此，这与下面代码的效果相同：
houseprice = 249;
500;记住，任何表达式后面加上一个分号就成了表达式语句。所以，
500;也是一条语句，但是什么也不做。
另外，下面的语句
houseprice = (249,500);
赋给houseprice的值是逗号右侧子表达式的值，即500。
*/