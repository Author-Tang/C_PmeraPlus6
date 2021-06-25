/*
 * @Author: Author
 * @Date: 2021-06-24 10:52:21
 * @LastEditors: Author
 * @LastEditTime: 2021-06-24 11:17:13
 * @FilePath: \C_PrimerPlus\4\4_1.c
 * @description: 演示与用户交互
 */

#include <stdio.h>
#include <string.h>     //提供 strlen()函数的原型
#define DENSITY 62.4    //人体密度 (单位:磅/立方英尺)

#if 0
int main()
{
    float weight, volume;
    int size, letters;
    char name[40];      //name是一个可容纳40个字符的数组

    printf("Hi! What's your first name?\n");
    scanf("%s",name);
    printf("%s, what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("Well,%s,your volume is %2.2f cubic feet.\n",name,weight);
    printf("Also,your first name has %d letters,\n",letters);
    printf("and we have %d bytes to store it.\n",size);

    return 0x00;
}
#endif

#if 1
int main()
{
    float weight, volume;
    int size, letters;
    char name[40];      //name是一个可容纳40个字符的数组

    printf("你好! 你叫什么名字\n");
    scanf("%s",name);
    printf("%s, 你的体重是多少磅?\n",name);
    scanf("%f",&weight);
    
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("好吧,%s,你的体重是 %2.2f 立方英尺.\n",name,volume);
    printf("另外,你的名字有 %d 字母,\n",letters);
    printf("我们有 %d 个字节存储它.\n",size);

    return 0x00;
}
#endif
