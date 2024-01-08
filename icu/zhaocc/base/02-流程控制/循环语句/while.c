#include <stdio.h>
void main()
{
    /**
     * while语句用于循环结构，满足条件时，不断执行循环体。
     * while (expression)
        statement

        如果表达式expression为非零值（表示真），就会执行statement语句，然后再次判断expression是否为零；如果expression为零（表示伪）就跳出循环，不再执行循环体。
    */
    int num = 1;
    while (num)
    {
        puts("while loop");
    }
    
}