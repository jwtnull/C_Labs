#include <stdio.h>
void main()
{
    /**
     * for语句是最常用的循环结构，通常用于精确控制循环次数。
     * for (initialization; continuation; action)
        statement;


        for语句的条件部分（即圆括号里面的部分）有三个表达式。

initialization：初始化表达式，用于初始化循环变量，只执行一次。
continuation：判断表达式，只要为true，就会不断执行循环体。
action：循环变量处理表达式，每轮循环结束后执行，使得循环变量发生变化。
    */

    for (int i = 10; i > 0; i--)
        printf("i is %d\n", i);

    // 死循环
    for (;;)
    {
        printf("本行会无限循环地打印。\n");
    }
}