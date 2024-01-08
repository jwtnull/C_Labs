#include <stdio.h>
void main()
{
    /**
     * 表达式：
     *  if(expression) stement
     * or
     * if(expression)
     * {
     *      stement
     * }
     *表达式(expression)为真(不为0)，执行stement
     *
     */
    int num = 10;
    if (num)
    {
        puts("true");
    }

    // or
    if (num)
        puts("true");

    /**
     * 表达式：
     * if(expression)stement
     * else stement
     *
     * or
     *
     * if(expression){
     *      stement
     * }else{
     *      stment
     * }
     */
    if (num)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }

    // or

    if (num)
        puts("true");
    else
        puts("false");
}