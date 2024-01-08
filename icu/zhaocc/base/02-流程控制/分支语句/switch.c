#include <stdio.h>
void main()
{
    /**
     * switch 语句是一种特殊形式的 if...else 结构，用于判断条件有多个结果的情况。它把多重的else if改成更易用、可读性更好的形式。
     * switch (expression) {
        case value1: statement
        case value2: statement
        default: statement
            }
            根据表达式expression不同的值，执行相应的case分支。如果找不到对应的值，就执行default分支
     *
    */
    short sex = 1;
    switch (sex)
    {
    case 1:
        puts("男");
        break;
    case 2:
        puts("女");
        break;
    default:
        puts("未知性别");
    }
}