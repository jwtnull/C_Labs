#include <stdio.h>
void main()
{
    /**
     * 三元表达式：可以用作if...else的简写形式
     * <expression1> ? <expression2> : <expression3>
     *
     * 达式expression1如果为true（非0值），就执行expression2，否则执行expression3。
     */
    int num = 10;
    puts(num ? "true" : "false");
    // or
    if (num)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }
}